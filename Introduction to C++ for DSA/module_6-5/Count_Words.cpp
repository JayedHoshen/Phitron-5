#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, word;
    getline(cin, s);

    stringstream ss(s);

    int cnt = 0;
    while(ss >> word) {
        for(int i = 0; i < word.size(); i++) {
            if(word[i] >= 'a' && word[i] <= 'z' || word[i] >= 'A' && word[i] <= 'Z')  {
                cnt++;
                break;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}