#pragma once

#include "backtest/marketdata.hpp"
#include "backtest/strategy.hpp"
#include "backtest/account.hpp"
#include "backtest/execution.hpp"


namespace backtest {
    
    struct Backtester {
        void run(MarketData& md, Strategy& strategy, Account& account, Execution& execution);
    };

} // namespace backtest
