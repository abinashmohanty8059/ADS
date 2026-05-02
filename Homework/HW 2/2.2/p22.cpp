#include <iostream>
#include <deque>
using namespace std;

int main() {

    
    deque<float> A;   

    float x;

    
    while (cin >> x && x != 0) {   //2

        
        if (x > 0)
            A.push_back(x);   
        else
            A.push_front(x);  
    }

    
    for (float val : A) {   
        cout << val << " ";
    }

    
    cout << endl << endl;   

    
    auto it = A.begin();   

    
    while (it != A.end() && *it < 0) {
        it++;
    }

    A.insert(it, 0);   

    
    for (auto i = A.begin(); i != A.end(); i++) {   
        cout << *i;
        if (next(i) != A.end()) cout << ";";
    }

    return 0;
}