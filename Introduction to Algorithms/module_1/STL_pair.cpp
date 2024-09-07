#include <bits/stdc++.h>
using namespace std;

class Pair {
public:
    string first;
    int second;
    Pair(string name, int roll) {
        first = name;
        second = roll;
    }
};

int main()
{
    // Pair p("Jayed Hoshen", 101);
    // cout << p.first << " " << p.second << endl;
    
    pair <string, int> pr; // STL
    pr = make_pair("Jayed", 10);
    cout << pr.first << " " << pr.second << endl;

    return 0;
}