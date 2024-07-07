#include <bits/stdc++.h>
using namespace std;

class Person {
    public:
        string name;
        int age;
        int marks1;
        int marks2;
        Person(string nm, int ag, int m1, int m2) {
            name = nm;
            age = ag;
            marks1 = m1;
            marks2 = m2;
        }
        void hello() {
            cout << name << ' ' << age << endl;
        }
        int totalMarks() {
            return marks1+marks2;
        }
};

class Person1 {
    public:
        string name;
        int age;
        Person1(string name, int age) {
            this -> name = name;
            (*this).age = age;
        }
        void hello() {
            cout << "hello\n";
        }
        void show() {
            cout << name << " " << age << endl;
        }
};

int main()
{
    // Person1 p("Jayed khan", 27, 90, 80);
    // p1.hello();
    // cout << p1.totalMarks() << endl;

    Person1 s1("Jayed kahn", 27);
    s1.hello();
    s1.show();

    return 0;
}