#pragma once

#include "backtest/marketdata.hpp"
#include "backtest/strategy.hpp"

namespace backtest {
    
    struct Backtester {
        void run(MarketData& md, Strategy& strategy);
    };

} // namespace backtest
