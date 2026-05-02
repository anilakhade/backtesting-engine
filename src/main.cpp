#include <iostream>
#include "backtest/instrument.hpp"
#include "backtest/bar.hpp"
#include "backtest/timeseries.hpp"

int main() {
    
    backtest::Instrument nifty{
        .symbol = "NIFTY",
        .type   = backtest::InstrumentType::Future
    };

    backtest::Bar bar{
        .timestamp  = 1746090000,
        .open       = 24500.5,
        .high       = 24600.0,
        .low        = 24480.0,
        .close      = 24580.75,
        .volume     = 1250000,
        .instrument = nifty
    };

    backtest::TimeSeries ts;
    ts.bars.push_back(bar);

    std::cout << "TimeSeries created with " << ts.bars.size()
                << " bar for " << ts.bars[0].instrument.symbol << "\n";


    return 0;
}
