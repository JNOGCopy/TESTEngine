#include <src/core/game_module.hpp>
#include <src/core/render/deltatime_module.hpp>
#include "game.hpp"

void Game::GameTick()
{
    if (m_deltaTimeModule == nullptr) return; // You must have deltaTimeModule in order to tick all modules

    for (int i = 0; i < m_gameModules.size(); i++){
        m_gameModules.at(i)->Tick(m_deltaTimeModule->getDeltaTime());
    }
}

void Game::AddGameModule(std::unique_ptr<GameModule> gameModule){
    
    m_gameModules.push_back(gameModule);
}
