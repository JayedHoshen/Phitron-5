#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;

int par[N];

void dsuInitialize(int n) {
    for(int i = 0; i < n; i++) {
        par[i] = -1;
    }
    par[1] = 3;
    par[2] = 1;
}

// int find(int node) { // O(N)
//     if(par[node] == -1) return node;
//     return find(par[node]);
// }

int dsuFind(int node) {
    if(par[node] == -1) return node;
    int leader = dsuFind(par[node]);
    par[node] = leader;
    return leader;
}

int main()
{
    dsuInitialize(4);

    cout << dsuFind(0) << endl;     
    cout << dsuFind(1) << endl;     
    cout << dsuFind(2) << endl;     
    cout << dsuFind(3) << endl;    

    return 0;
}