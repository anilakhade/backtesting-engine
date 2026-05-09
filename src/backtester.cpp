#include "backtest/backtester.hpp"
#include "backtest/marketdata.hpp"
#include "backtest/strategy.hpp"

namespace backtest {

    void Backtester::run(MarketData& md, Strategy& strategy) {
        for (const auto& [symbol, ts] : md.by_symbol) {
            for (const auto& bar : ts.bars) {
                strategy.onBar(bar);
            }
        }
    }
}
