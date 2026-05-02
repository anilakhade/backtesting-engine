#pragma once

#include "backtest/instrument.hpp"
#include <cstdint>

namespace backtest {

    struct Bar {
        uint64_t timestamp;
        double open;
        double high;
        double low;
        double close;
        uint64_t volume;
        Instrument instrument;
    };
} // namespace backtest
