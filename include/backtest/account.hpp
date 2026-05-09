#pragma once

#include "backtest/portfolio.hpp"
#include "backtest/trade.hpp"
#include <vector>

namespace backtest {

    struct Account {
        double cash = 10000000.0; // starting capital 1 cr
        Portfolio portfolio;
        std::vector<Trade> trades;
    };

} // namespace backtest
