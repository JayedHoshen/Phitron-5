#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
        char name[100];
        int roll;
        double cgpa;
};

int main()
{
    Student s1, s2;

    cin.getline(s1.name, 100);
    cin >> s1.roll >> s1.cgpa;
    getchar();
    cin.getline(s2.name, 100);
    cin >> s2.roll >> s2.cgpa;

    cout << "\nName : " << s1.name << "\nRoll : " << s1.roll << "\nCGPA : " << s1.cgpa << endl;
    cout << "\nName : " << s2.name << "\nRoll : " << s2.roll << "\nCGPA : " << s2.cgpa << endl;

    return 0;
}