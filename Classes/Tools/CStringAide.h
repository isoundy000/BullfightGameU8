#pragma once
#include "cocos2d.h"
#include "cocos-ext.h"
USING_NS_CC;
USING_NS_CC_EXT;
using namespace ui;
class CStringAide
{
public:
	CStringAide();
	~CStringAide();

private:
	std::vector<std::string> parseUTF8(const std::string &str);
public:
	//GBK转UTF-8////////////////////////////////////////////////////////////////////////
	std::string GBKToUTF8(const char *strChar);
	//UTF-8转GBK////////////////////////////////////////////////////////////////////////
	std::string UTF8ToGBK(const char *strChar);
	//截取字符串（中英文）
	std::string subUTF8(const std::string &str, int from, int to);

};

