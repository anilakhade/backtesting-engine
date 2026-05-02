#include <iostream>
#include "backtest/dataloader.hpp"
#include "backtest/marketdata.hpp"
#include "backtest/dummy_strategy.hpp"

int main() {
    backtest::MarketData md;
    backtest::DataLoader loader;
    loader.loadDummyData(md);

    backtest::DummyStrategy strat;

    for (const auto& ts : md.by_symbol) {
        for (const auto& bar : ts.second.bars) {
            strat.onBar(bar);
        }
    }

    std::cout << "Strategy test finished\n";

    return 0;
}
