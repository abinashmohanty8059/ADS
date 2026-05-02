#include <iostream>
#include <map>
#include <fstream>
using namespace std;

int main() {

    map<string, string> m;   

    ifstream in("data.txt"); 

    string fname, lname, date;

    
    while (in >> fname >> lname >> date) {
        string fullName = fname + " " + lname;
        m[fullName] = date;
    }             

    in.close();

    
    string query;
    cout << "Enter name: ";
    getline(cin, query);

    
    if (m.find(query) != m.end()) {
        cout << m[query] << endl;
    } else {
        cout << "Name not found!" << endl;
    }

    return 0;
}