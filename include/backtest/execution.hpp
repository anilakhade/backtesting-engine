#pragma once

#include "backtest/account.hpp"
#include "backtest/order.hpp"
#include "backtest/trade.hpp"

namespace backtest {

    struct Execution {
        void fillOrder(Account& account, const Order& order, double fill_price, uint64_t timestamp);
    };

} // namespace backtest
