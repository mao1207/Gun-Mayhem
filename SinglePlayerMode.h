#include "../cocos2d/cocos/cocos2d.h"

class SinglePlayerMode : public cocos2d::Scene
{
public:
    static cocos2d::Scene* createScene();
    virtual bool init();
    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);
    void menuCloseCallback2(cocos2d::Ref* pSender);
    // implement the "static create()" method manually
    CREATE_FUNC(SinglePlayerMode);
};
