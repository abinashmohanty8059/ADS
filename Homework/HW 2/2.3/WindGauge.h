#ifndef WINDGAUGE_H
#define WINDGAUGE_H

#include <deque>
using namespace std;

class WindGauge {
private:
    deque<int> data;   
    int period;        

public:
    WindGauge(int period = 12);   

    void currentWindSpeed(int speed);
    int highest() const;
    int lowest() const;
    int average() const;

    void dump() const;   
};

#endif