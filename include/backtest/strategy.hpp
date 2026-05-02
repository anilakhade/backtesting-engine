#pragma once

#include "backtest/marketdata.hpp"
#include "backtest/bar.hpp"

namespace backtest {

    struct Strategy {
        virtual ~Strategy() = default;
        virtual void onBar(const Bar& bar) = 0;  // called every 1-bar
        virtual void onEndOfDay() {}             // optional
    }; 

} // namespace backtest
