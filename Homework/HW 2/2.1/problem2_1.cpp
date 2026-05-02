#include <iostream>
#include <list>
#include <fstream>
using namespace std;

int main() {
    list<int> A, B;   
    int x;

    
    while (cin >> x && x > 0) {
        A.push_back(x);   
        B.push_front(x);  
    }

    
    for (int val : A) {
        cout << val << " ";
    }

    
    ofstream out("listB.txt");
    for (int val : B) {
        out << val << " ";
    }
    out.close();

    cout << endl << endl; 

    
    if (!A.empty()) {
        A.push_back(A.front());
        A.pop_front();
    }

    if (!B.empty()) {
        B.push_back(B.front());
        B.pop_front();
    }

    
    for (auto it = A.begin(); it != A.end(); it++) {
        cout << *it;
        if (next(it) != A.end()) cout << ",";
    }
    cout << endl;

    for (auto it = B.begin(); it != B.end(); it++) {
        cout << *it;
        if (next(it) != B.end()) cout << ",";
    }

    cout << endl << endl; 

    
    A.merge(B);

    
    A.sort();

    for (int val : A) {
        cout << val << " ";
    }

    return 0;
}