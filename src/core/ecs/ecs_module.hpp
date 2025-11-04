#pragma once

#include <memory>
#include <unordered_map>

struct ECSEntityContainer;
struct ECSComponentContainer;

class ECSModule{
private:
    std::shared_ptr<ECSEntityContainer> m_ecsEntityContainer;
    std::unordered_map<std::size_t, std::shared_ptr<void>> m_ecsComponentContainerMap;
public:
    std::shared_ptr<ECSEntityContainer> getECSEntityContainer();

    template<typename T = ECSComponentContainer>
    std::shared_ptr<ECSComponentContainer> getECSComponentContainer();
    
    template<typename T = ECSComponentContainer>
    void addECSComponentContainer(std::shared_ptr<ECSComponentContainer>);
};