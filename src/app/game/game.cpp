#include <src/core/game_module.hpp>
#include "game.hpp"

void Game::GameTick()
{
    for (std::shared_ptr<GameModule> gameModule : m_gameModules){
        gameModule->Tick();
    }
}

void Game::AddGameModule(std::shared_ptr<GameModule> gameModule){
    m_gameModules.push_back(gameModule);
}
