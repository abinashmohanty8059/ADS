#include "WindGauge.h"

int main() {

    
    WindGauge wg;

    
    int arr1[] = {15, 16, 12, 15, 15};
    for (int x : arr1) {
        wg.currentWindSpeed(x);
    }

    wg.dump();

    
    int arr2[] = {16, 17, 16, 16, 20, 17, 16, 15, 16, 20};
    for (int x : arr2) {
        wg.currentWindSpeed(x);
    }

    wg.dump();

    return 0;
}