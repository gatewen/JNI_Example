#include "UtilTools.h"

//----------------------------------------------------------------------------
bool UtilTools::init()
    {

    return true;
    }
//----------------------------------------------------------------------------
long long UtilTools::getNowUnixTime()
    {
    auto now = std::chrono::system_clock::now();
    auto last = std::chrono::system_clock::to_time_t(now);
    return last;
    }
//----------------------------------------------------------------------------
long long UtilTools::getTomorrowZeroTime()
    {
    std::time_t last = getNowUnixTime();
    auto t = std::gmtime(&last);
    t->tm_hour = 0;
    t->tm_min = 0;
    t->tm_sec = 0;
    long long s = mktime(t);
    s += (24 * 60 * 60);
    return s;
    }
//----------------------------------------------------------------------------
long long UtilTools::getTomorrowExcessTime()
    {
    return getTomorrowZeroTime() - getNowUnixTime();
    }
//----------------------------------------------------------------------------

