#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc; 
    cin >> tc;
    cin.ignore();

    while(tc--) {
        string sentence;

        getline(cin, sentence);
        stringstream ss(sentence); 

        map <string, int> mp;
        string mxWord, word; 
        int mxCnt = 0;

        while(ss >> word) {
            mp[word]++;            
            if(mp[word] > mxCnt) {
                mxCnt = mp[word];
                mxWord = word;
            }
        } 
        cout << mxWord << " " << mxCnt << endl;
    }

    return 0;
}