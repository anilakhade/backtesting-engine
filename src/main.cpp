#include <iostream>

#include "backtest/dataloader.hpp"
#include "backtest/marketdata.hpp"

int main() {
    backtest::MarketData md;
    backtest::DataLoader loader;

    loader.loadDummyData(md);

    std::cout << "MarketData loaded with " << md.by_symbol.size() << " instrument\n";

    return 0;
}
