#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;

int par[N];
int groupSize[N];
int level[N];

void dsuInitialize(int n) {
    for(int i = 0; i < n; i++) {
        par[i] = -1;
        level[i] = 0;
        groupSize[i] = 1;
    }
}

int dsuFind(int node) {
    if(par[node] == -1) return node;
    int leader = dsuFind(par[node]);
    par[node] = leader;
    return leader;
}

void dsuUnionBySize(int node1, int node2) { 
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

void dsuUnionByLevel(int node1, int node2) {
    int leaderA = dsuFind(node1);
    int leaderB = dsuFind(node2);
    
    if(level[leaderA] > level[leaderB]) {
        par[leaderB] = leaderA;
    }
    else if(level[leaderA] < level[leaderB]) {
        par[leaderA] = leaderB;
    }
    else {
        par[leaderA] = leaderB;
        level[leaderB]++;
    }
}

int main()
{
    dsuInitialize(7);

    dsuUnionByLevel(1, 2);
    dsuUnionByLevel(2, 3);
    dsuUnionByLevel(4, 5);
    dsuUnionByLevel(5, 6);
    cout << dsuFind(1) << endl;
    cout << dsuFind(4) << endl;
    dsuUnionByLevel(1, 5);
    cout << dsuFind(1) << endl;
    cout << dsuFind(4) << endl;

    return 0;
}