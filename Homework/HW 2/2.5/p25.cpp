#include <iostream>
#include <set>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    
    srand(time(0));

    set<int> lotto;

    
    while (lotto.size() < 6) {
        int num = rand() % 49 + 1;
        lotto.insert(num);
    }

    
    for (auto it = lotto.begin(); it != lotto.end(); it++) {
        cout << *it << " ";
    }

    return 0;
}