#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};

bool cmp(Student a, Student b) {   
    if((a.math_marks + a.eng_marks) == (b.math_marks + b.eng_marks)) return a.id < b.id;
    else return (a.math_marks + a.eng_marks) > (b.math_marks + b.eng_marks);
}

int main()
{
    int n;
    cin >> n;

    Student ara[n];
    for(int i = 0; i < n; i++) cin >> ara[i].nm >> ara[i].cls >> ara[i].s >> ara[i].id >> ara[i].math_marks >> ara[i].eng_marks;

    sort(ara, ara+n, cmp);

    for(int i = 0; i < n; i++) cout << ara[i].nm << " " << ara[i].cls << " " << ara[i].s << " " << ara[i].id << " " << ara[i].math_marks << " " << ara[i].eng_marks << endl;

    return 0;
}