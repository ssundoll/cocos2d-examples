#include "HelloWorldScene.h"

using namespace cocos2d;

CCScene* HelloWorld::scene()
{
    CCScene * scene = NULL;
    do 
    {
        // 'scene' is an autorelease object
        scene = CCScene::create();
        CC_BREAK_IF(! scene);

        // 'layer' is an autorelease object
        HelloWorld *layer = HelloWorld::create();
        CC_BREAK_IF(! layer);

        // add layer as a child to scene
        scene->addChild(layer);
    } while (0);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool HelloWorld::init()
{
    bool bRet = false;
    do 
    {

    m_pos_x1 = m_pos2_x1 = 0;
	m_pos_x2 = m_pos2_x2 = 480;
		
    background1 = CCSprite::create("map_mario-stage001.png");
    background2 = CCSprite::create("map_mario-stage002.png");
	
	background1->setAnchorPoint(ccp(0,1));
	background2->setAnchorPoint(ccp(0,1));

		
	background1->setPosition(ccp(m_pos_x1,320));
	background2->setPosition(ccp(m_pos_x2,320));


	wideground1 = CCSprite::create("map_mario-bg001.png");
	wideground2 = CCSprite::create("map_mario-bg001.png");

	wideground1->setPosition(ccp(m_pos2_x1,320));
	wideground2->setPosition(ccp(m_pos2_x2,320));

	wideground1->setAnchorPoint(ccp(0,1));
	wideground2->setAnchorPoint(ccp(0,1));


	this->addChild(background1,1);
	this->addChild(background2,1);

	this->addChild(wideground1,0);
	this->addChild(wideground2,0);

        bRet = true;

    } while (0);

	this ->schedule(schedule_selector(HelloWorld::MainRutine));

    return bRet;
}

void HelloWorld::MainRutine(float f)

{

	
	m_pos_x1 -=3;
	m_pos_x2 -=3;

	if (m_pos_x1 <= -480 ) m_pos_x1 = 480;
    if (m_pos_x2 <= -480 ) m_pos_x2 = 480;


	background1->setPosition(ccp(m_pos_x1,320));
	background2->setPosition(ccp(m_pos_x2,320));


	m_pos2_x1 --;
	m_pos2_x2 --;

	if (m_pos2_x1 <= -480 ) m_pos2_x1 = 480;
    if (m_pos2_x2 <= -480 ) m_pos2_x2 = 480;


	wideground1->setPosition(ccp(m_pos2_x1,320));
	wideground2->setPosition(ccp(m_pos2_x2,320));

}
