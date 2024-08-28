#include <bits/stdc++.h>
using namespace std;

int main()
{
    map <string, int> mp;

    // mp.insert({"Rahim", 25}); // first type
    // mp.insert({"Shanto", 35});
    // mp.insert({"Tamim", 45}); // O(logN)
    // mp.insert(make_pair("Tamim", 45));

    mp["Rahim"] = 25; // second type
    mp["Shanto"] = 35;
    mp["Tamim"] = 45; // O(logN)

    cout << mp["Tamim"] << endl;

    for(auto it = mp.begin(); it != mp.end(); it++) {
        cout << it->first << " " << it->second << endl; // O(logN)
    }

    cout << endl << "Shanto: " ;
    if(mp.count("Shanto")) cout << "Ase" << endl;
    else cout << "Nai" << endl;

    return 0;
}