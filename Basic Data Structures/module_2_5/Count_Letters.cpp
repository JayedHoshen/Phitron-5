#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> cnt(26, 0);
    
    char ch;
    while(cin >> ch) {
        cnt[ch - 'a']++;
    } 
 
    for(char i = 'a'; i <= 'z'; i++) {
        if(cnt[i - 'a'] > 0) printf("%c : %d\n", i, cnt[i - 'a']);
    } 

    return 0;
}