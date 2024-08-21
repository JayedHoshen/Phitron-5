#include <bits/stdc++.h>
using namespace std;

class Student {
public:
	string name;
	int roll;
	char section;
	double math_marks;
	int cls;

    Student(string name, int roll, char section, double math_marks, int cls) {
        this -> name = name;
        this -> roll = roll;
        this -> section = section;
        this -> math_marks = math_marks;
        this -> cls = cls;
    }
};

int main()
{
    Student s1("jayed", 101, 'A', 89.45, 11);
    Student s2("Khan", 102, 'B', 79.45, 12);
    Student s3("Sayed", 103, 'C', 69.5, 12);

    double mx = max({s1.math_marks, s2.math_marks, s3.math_marks});

    if(mx == s1.math_marks) cout << s1.name << endl;
    else if(mx == s2.math_marks) cout << s2.name << endl;
    else cout << s3.name << endl;

    return 0;
}