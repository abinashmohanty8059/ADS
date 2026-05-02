#include "WindGauge.h"
#include <algorithm>
#include <iostream>
using namespace std;


WindGauge::WindGauge(int p) {
    period = p;
}


void WindGauge::currentWindSpeed(int speed) {
    data.push_back(speed);   

    
    if (data.size() > period) {
        data.pop_front();
    }
}


int WindGauge::highest() const {
    return *max_element(data.begin(), data.end());
}


int WindGauge::lowest() const {
    return *min_element(data.begin(), data.end());
}


int WindGauge::average() const {
    int sum = 0;

    for (int val : data) {
        sum += val;
    }

    return sum / data.size();
}


void WindGauge::dump() const {
    cout << "Lowest: " << lowest()
         << ", Highest: " << highest()
         << ", Average: " << average() << endl;
}