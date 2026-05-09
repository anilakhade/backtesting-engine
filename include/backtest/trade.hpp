#pragma once

#include "backtest/order.hpp"
#include <cstdint>

namespace backtest {

    struct Trade {
        Order order;
        double fill_price = 0.0;
        uint64_t timestamp = 0;
        double commission = 0.0;  // brokerage
    };

} // namespace backtest
