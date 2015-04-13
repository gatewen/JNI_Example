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
	template<class T>
    long long getNowUnixTime();	//���o�ثe�ɶ�
    long long getTomorrowZeroTime();	//���o����s�I�ɶ�
    long long getTomorrowExcessTime();	//�Z������Ѿl�ɶ�

    };

template<class T>
std::string UtilTools::NumberToString(T value)
{
	std::stringstream ss;
	std::string temp;
	ss << value;
	ss >> temp;
	return temp;
}
	
	
#endif
