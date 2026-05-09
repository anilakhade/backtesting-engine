#include <iostream>
#include "backtest/dataloader.hpp"
#include "backtest/marketdata.hpp"
#include "backtest/backtester.hpp"
#include "backtest/dummy_strategy.hpp"
#include "backtest/execution.hpp"
#include "backtest/account.hpp"
#include "backtest/order.hpp"

int main() {
    backtest::MarketData md;
    backtest::DataLoader loader;
    loader.loadDummyData(md);
    
    backtest::Account account;
    backtest::Execution exec;
    backtest::DummyStrategy strat;
    backtest::Backtester engine;

    engine.run(md, strat, account, exec);

    std::cout << "Full backtest completed\n";
    std::cout << "Final cash = " << account.cash << "\n";
    std::cout << "Total trades = " << account.trades.size() << "\n";


    return 0;
}
