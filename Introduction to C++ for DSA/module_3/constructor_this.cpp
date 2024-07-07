#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
        int roll;
        int cls;
        double gpa;
    Student(int roll, int cls, double g) {
        this -> roll = roll;
        (*this).cls = cls;
        gpa = g;
    }
};

int main()
{
    Student s1(101, 8, 4.08);
    
    cout << "\nRoll = " << s1.roll << "\nClass = " << s1.cls << "\nGPA = " << s1.gpa << endl;

    return 0;
}