#include <vector>
#include <memory>

class GameModule;
class DeltaTimeModule;

class Game{
public:
    void GameTick();
    void AddGameModule(std::unique_ptr<GameModule>);
private:
    std::vector<std::unique_ptr<GameModule>> m_gameModules;
    std::unique_ptr<DeltaTimeModule> m_deltaTimeModule;
};