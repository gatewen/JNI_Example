#ifndef __UTIL_TOOLS_H_
#define __UTIL_TOOLS_H_

#include <ctime>
#include <chrono>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Singleton.h"

class UtilTools: public Singleton<UtilTools>
    {
public:
    bool init();
    long long getNowUnixTime();	//取得目前時間
    long long getTomorrowZeroTime();	//取得明日零點時間
    long long getTomorrowExcessTime();	//距離明日剩餘時間

    };	
#endif
