#pragma once

#include "backtest/marketdata.hpp"
#include <string>

namespace backtest {

    struct DataLoader {
        // TODO: will load real Dhan CSV/API later
        void loadDummyData(MarketData& md);
    };
} // namespace backtest
