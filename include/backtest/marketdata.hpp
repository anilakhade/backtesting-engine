#pragma once

#include "backtest/timeseries.hpp"
#include <unordered_map>
#include <string>

namespace backtest {
    
    struct MarketData {
        std::unordered_map<std::string, TimeSeries> by_symbol;
    };
} // namespace backtest
