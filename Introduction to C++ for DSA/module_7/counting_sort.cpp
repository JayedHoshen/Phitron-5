#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    char s;
    cin >> n;

    int frq[26] = {0};
    for(int i = 0; i < n; i++) {
        cin >> s;
        frq[s - 'a']++;
    } 

    for(char i = 'a'; i <= 'z'; i++) {
        for(int j = 0; j < frq[i - 'a']; j++) cout << i;
    }
    cout << endl;

    return 0;
}