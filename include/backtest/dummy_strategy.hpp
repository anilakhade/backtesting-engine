#pragma once

#include "backtest/strategy.hpp"
#include <iostream>

namespace backtest {
    
    struct DummyStrategy : Strategy {
        void onBar(const Bar& bar) override {
            std::cout << "DummyStrategy: " << bar.instrument.symbol << " @ " << bar.close << "\n";
        }
    };
} // namespace backtest
