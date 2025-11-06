#include <vector>
#include <memory>

class GameModule;

class Game{
public:
    void GameTick();
    void AddGameModule(std::shared_ptr<GameModule>);
private:
    std::vector<std::shared_ptr<GameModule>> m_gameModules;
    std::shared_ptr<GameModule> m_deltaTimeModule;
};