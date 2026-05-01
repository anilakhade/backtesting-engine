#pragma once
#include <string>

namespace backtest {

    enum class InstrumentType {
        Equity,
        Future,
        CallOption,
        PutOption
    };

    struct Instrument {
        std::string symbol;
        InstrumentType type;
    };

} // namespace backtest
