#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"
using namespace cocos2d;
class HelloWorld : public cocos2d::CCLayer
{
public:
    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();  

    // there's no 'id' in cpp, so we recommand to return the exactly class pointer
    static cocos2d::CCScene* scene();
    
    // a selector callback
    void menuCloseCallback(CCObject* pSender);

    // implement the "static node()" method manually
    CREATE_FUNC(HelloWorld);

	CCSprite *background1;
	CCSprite *background2;
	CCSprite *wideground1;
	CCSprite *wideground2;

	int m_pos_x1;
	int m_pos_x2;

	int m_pos2_x1;
	int m_pos2_x2;

	void MainRutine(float f);


};

#endif  // __HELLOWORLD_SCENE_H__