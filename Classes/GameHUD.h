//
//  GameHUD.h
//  BullfightGame
//
//  Created by 张 恒 on 15/3/16.
//
//

#ifndef __BullfightGame__GameHUD__
#define __BullfightGame__GameHUD__

#include "cocos2d.h"
#include "cocos-ext.h"
USING_NS_CC;
USING_NS_CC_EXT;
using namespace gui;
class GameHUD:public CCLayer
{
public:
	virtual void onEnter();
	virtual void onExit();
    CREATE_FUNC(GameHUD);
private:
	//菜单////////////////////////////////////////////////////////////////////////
	void menuPause(CCObject* pSender, TouchEventType type);
};

#endif /* defined(__BullfightGame__GameHUD__) */
