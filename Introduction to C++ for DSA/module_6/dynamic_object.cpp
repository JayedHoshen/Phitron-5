#include <bits/stdc++.h>
using namespace std;

class Person {
public:
    string name;
    int age;
    Person(string name, int age) {
        this -> name = name;
        (*this).age = age;
    }
};

int main()
{
    Person* s1 = new Person("Jayed khan", 27);
    Person* s2 = new Person("Jayed Hossain", 37);

    // // s1 = s2; //static
    // s1 -> name = s2 -> name;
    // s1 -> age = s2 -> age;
    *s1 = *s2; // dynamic
    
    delete s2;

    cout << s1->name << " " << s1->age << endl;

    return 0;
}