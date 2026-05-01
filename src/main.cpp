#include <iostream>
#include "backtest/instrument.hpp"

int main() {
    
    backtest::Instrument nifty{
        .symbol = "NIFTY",
        .type   = backtest::InstrumentType::Future
    };

    std::cout << " Instrument Created: " << nifty.symbol << "\n";

    return 0;
}
