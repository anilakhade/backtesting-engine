#include "backtest/backtester.hpp"

namespace backtest {

    void Backtester::run(MarketData& md, Strategy& strategy, Account& account, Execution& execution) {
        for (const auto& [symbol, ts] : md.by_symbol) {
            for (const auto& bar : ts.bars) {
                strategy.onBar(bar);
                //TODO: later strategy will call execution.fillOrder() here
            }
        }
    }
}
