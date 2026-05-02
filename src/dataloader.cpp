#include "backtest/dataloader.hpp"
#include "backtest/bar.hpp"
#include "backtest/instrument.hpp"
#include "backtest/timeseries.hpp"

namespace backtest {
    void DataLoader::loadDummyData(MarketData& md) {
        Instrument nifty {
            .symbol = "NIFTY",
            .type   = InstrumentType::Future
        };

        Bar bar{
            .timestamp    = 1746090000,
            .open         = 24500.5,
            .high         = 24600.0,
            .low          = 24480.0,
            .close        = 24580.76,
            .volume       = 1250000,
            .instrument   = nifty
        };

        TimeSeries ts;
        ts.bars.push_back(bar);

        md.by_symbol["NIFTY"] = ts;
    }
} // namespace backtest
