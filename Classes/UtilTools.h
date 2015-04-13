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
    long long getNowUnixTime();	//���o�ثe�ɶ�
    long long getTomorrowZeroTime();	//���o����s�I�ɶ�
    long long getTomorrowExcessTime();	//�Z������Ѿl�ɶ�

    };	
#endif
