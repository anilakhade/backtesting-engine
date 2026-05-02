#pragma once

#include "backtest/bar.hpp"
#include <vector>

namespace backtest {
    struct TimeSeries {
        std::vector<Bar> bars;
    };
} // namespace backtest
