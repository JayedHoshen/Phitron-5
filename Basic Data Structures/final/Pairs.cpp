#include <bits/stdc++.h>
using namespace std;

class cmp {
public:
    bool operator() (pair<string, int> a, pair<string, int> b) {
        if(a.first > b.first) return true;
        else if(a.first < b.first) return false;
        else {
            if(a.second < b.second) return true;
            else return false;
        }
    }
};

int main()
{
    priority_queue <pair<string, int>, vector<pair<string, int>>, cmp> pq;
    
    int n; cin >> n;
    while(n--) {
        string name;
        int roll;
        cin >> name >> roll;

        pq.push({name, roll});
    }

    while(!pq.empty()) {
        cout << pq.top().first << " " << pq.top().second << "\n";
        pq.pop();
    }

    return 0;
}