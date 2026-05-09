#pragma once

#include "backtest/instrument.hpp"

namespace backtest {

    struct Position {
        Instrument instrument;
        int64_t quantity = 0;                 // +ve = long and -ve = short
        double avg_entry_price = 0.0;
        double unrealized_pnl = 0.0;          // will be updated later on each bar
    };
} // namespace backtest
