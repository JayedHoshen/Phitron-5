#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;

int par[N];

void dsuInitialize(int n) {
    for(int i = 0; i < n; i++) {
        par[i] = -1;
    }
    par[1] = 2;
    par[2] = 3;
    par[4] = 5;
    par[5] = 6;
}

int dsuFind(int node) {
    if(par[node] == -1) return node;
    int leader = dsuFind(par[node]);
    par[node] = leader;
    return leader;
}

void dsuUnion(int node1, int node2) {
    int leaderA = dsuFind(node1);
    int leaderB = dsuFind(node2);
    par[leaderA] = leaderB;
}

int main()
{
    dsuInitialize(7);
    
    cout << dsuFind(1) << endl; 
    cout << dsuFind(5) << endl;
    dsuUnion(2, 5);
    cout << dsuFind(1) << endl; 
    cout << dsuFind(4) << endl;

    return 0;
}