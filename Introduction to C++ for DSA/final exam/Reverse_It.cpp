#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string nm;
    int cls;
    char s;
    int id;
};

int main()
{
    int n;
    cin >> n;

    Student ara[n];
    for(int i = 0; i < n; i++) cin >> ara[i].nm >> ara[i].cls >> ara[i].s >> ara[i].id;

    int i = 0, j;
    j = n - 1;
    while(i < j) {
        swap(ara[i].s, ara[j].s);
        i++; j--;
    }

    for(int i = 0; i < n; i++) cout << ara[i].nm << " " << ara[i].cls << " " << ara[i].s << " " << ara[i].id << endl;

    return 0;
}