#pragma once

#include "backtest/position.hpp"
#include <unordered_map>
#include <string>

namespace backtest {
    
    struct Portfolio {
        std::unordered_map<std::string, Position> positions;
    };

} // namespace backtest
