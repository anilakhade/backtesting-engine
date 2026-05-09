#pragma once

#include "backtest/instrument.hpp"

namespace backtest {
    enum class OrderSide {
        Buy,
        Sell
    };

    struct Order {
        Instrument instrument;
        OrderSide side;
        int64_t quantity = 0;
        double price = 0.0;   // limit price or market price
    };

} // namespace backtest
