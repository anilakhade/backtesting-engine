#include <iostream>
#include "backtest/dataloader.hpp"
#include "backtest/marketdata.hpp"
#include "backtest/backtester.hpp"
#include "backtest/dummy_strategy.hpp"
#include "backtest/execution.hpp"
#include "backtest/account.hpp"
#include "backtest/order.hpp"

int main() {
    backtest::MarketData md;
    backtest::DataLoader loader;
    loader.loadDummyData(md);

    backtest::DummyStrategy strat;
    backtest::Backtester engine;

    engine.run(md, strat);

    // Test Execution
    backtest::Account account;
    backtest::Execution exec;

    backtest::Order test_order {
        .instrument = md.by_symbol.begin() -> second.bars[0].instrument,
        .side       = backtest::OrderSide::Buy,
        .quantity   = 50,
        .price      = 24580.75
    };

    exec.fillOrder(account, test_order, 24580.75, 1746090000);

    const auto& pos = account.portfolio.positions["NIFTY"];

    std::cout << "After fill:\n";
    std::cout << " Cash               = " << account.cash << "\n";
    std::cout << " Position           = " << pos.quantity << " @ " << pos.avg_entry_price << "\n";
    std::cout << " Trades             = " << account.trades.size() << "\n";

    std::cout << "Backtest + Execution + Position test completed\n";

    return 0;
}
