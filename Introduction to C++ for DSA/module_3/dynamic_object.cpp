#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa) {
        this -> roll = roll;
        this -> cls = cls;
        this -> gpa = gpa;
    }
};

Student* fun() {
    Student *s1 = new Student(101, 8, 4.55);
    return s1;
}

int main()
{
    Student *rahim = fun();

    cout << "Roll = " << rahim->roll << "\nClass = " << rahim->cls << "\nGPA = " << rahim->gpa << endl;

    return 0;
}