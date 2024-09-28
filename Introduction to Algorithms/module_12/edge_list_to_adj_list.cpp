#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

/*   // edge list to adj list in unweighted graph
    vector <int> v[n];
    while(e--) {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back(b);
        v[b].push_back(a); // undirected not use
    }
*/

    // edge list to adj list in weighted graph
    vector <pair<int, int>> v[n];
    while(e--) {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
        v[b].push_back({a, c}); // undirected not use
    }

    // print adj list 
    for(int i = 0; i < n; i++) {
        cout << i << "-> ";
        // for(int child : v[i]) cout << child << " "; // unweighted
        for(pair<int, int> child : v[i]) cout << "{" << child.first << ", " << child.second << "}, ";
        cout << endl;
    }

    return 0;
}