#include "backtest/execution.hpp"
#include "backtest/account.hpp"
#include "backtest/order.hpp"
#include "backtest/trade.hpp"

namespace backtest {

    void Execution::fillOrder(Account& account, const Order& order, double fill_price, uint64_t timestamp) {
        Trade trade {
            .order      = order,
            .fill_price = fill_price,
            .timestamp  = timestamp,
            .commission = 0.0          // TODO: add brokerage later
        };

        // update cash
        double cost = fill_price * static_cast<double>(order.quantity);
        if (order.side == OrderSide::Buy) {
            account.cash -= cost;
        } else {
            account.cash += cost;
        }

        // update or create position
        auto& pos = account.portfolio.positions[order.instrument.symbol];
        pos.instrument = order.instrument;

        if (pos.quantity == 0) {
            pos.avg_entry_price = fill_price;
        } else {
            //simple average for now
            pos.avg_entry_price = (pos.avg_entry_price * pos.quantity + fill_price * order.quantity)
                                / (pos.quantity + order.quantity);
        }

        pos.quantity += (order.side == OrderSide::Buy ? order.quantity : -order.quantity);


        // Record trade
        account.trades.push_back(trade);

        // TODO: update unrealized_pnl later on every bar
    }

} // namespace backtest
