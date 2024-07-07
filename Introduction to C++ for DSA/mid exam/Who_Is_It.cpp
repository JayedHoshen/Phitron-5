#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    int id;
    char name[101];
    char section;
    int marks;
};

int main()
{
    int tc; cin >> tc;

    while(tc--) {
        Student s1, s2, s3;
        cin >> s1.id >> s1.name >> s1.section >> s1.marks;
        cin >> s2.id >> s2.name >> s2.section >> s2.marks;
        cin >> s3.id >> s3.name >> s3.section >> s3.marks;

        int mx = max({s1.marks, s2.marks, s3.marks});

        if(mx == s1.marks) cout << s1.id << ' ' << s1.name << ' ' << s1.section << ' ' << s1.marks << endl;
        else if(mx == s2.marks) cout << s2.id << ' ' << s2.name << ' ' << s2.section << ' ' << s2.marks << endl;
        else cout << s3.id << ' ' << s3.name << ' ' << s3.section << ' ' << s3.marks << endl;
    }

    return 0;
}