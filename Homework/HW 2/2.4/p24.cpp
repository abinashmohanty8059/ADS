#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> v;

    
    for (int i = 1; i <= 30; i++) {
        v.push_back(i);
    }

    
    v.push_back(5);

    
    reverse(v.begin(), v.end());

    
    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    
    replace(v.begin(), v.end(), 5, 129);

    
    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }

    return 0;
}