class GameModule{
    friend class Game;
protected:
    virtual void Init();
    virtual void Ready();
    virtual void Tick(double deltaTime);
};