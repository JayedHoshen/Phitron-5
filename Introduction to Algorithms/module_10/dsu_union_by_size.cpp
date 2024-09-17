#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;

int par[N];
int groupSize[N];

void dsuInitialize(int n) {
    for(int i = 0; i < n; i++) {
        par[i] = -1;
        groupSize[i] = 1;
    }
}

int dsuFind(int node) {
    if(par[node] == -1) return node;
    int leader = dsuFind(par[node]);
    par[node] = leader;
    return leader;
}

void dsuUnionBySize(int node1, int node2) { // O(1) but we saw O(logN)
    int leaderA = dsuFind(node1);
    int leaderB = dsuFind(node2);
    
    if(groupSize[leaderA] > groupSize[leaderB]) {
        par[leaderB] = leaderA;
        groupSize[leaderA] += groupSize[leaderB];
    }
    else {
        par[leaderA] = leaderB;
        groupSize[leaderB] += groupSize[leaderA];
    }
}

int main()
{
    dsuInitialize(7);

    dsuUnionBySize(1, 2);
    dsuUnionBySize(2, 3);
    dsuUnionBySize(4, 5);
    dsuUnionBySize(5, 6);
    cout << dsuFind(1) << endl;
    cout << dsuFind(4) << endl;
    dsuUnionBySize(1, 5);
    cout << dsuFind(1) << endl;
    cout << dsuFind(4) << endl;

    return 0;
}