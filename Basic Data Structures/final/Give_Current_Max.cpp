#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int roll;
    int marks;
    Student(string name, int roll, int marks) {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class cmp {
public:
    bool operator() (Student a, Student b) {
        if(a.marks < b.marks) return true;
        else if(a.marks > b.marks) return false;
        else {
            if(a.roll > b.roll) return true;
            else return false;
        }
    }
};

int main()
{
    priority_queue <Student, vector<Student>, cmp> pq;

    int n;
    cin >> n;
    while(n--) {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student data(name, roll, marks);
        pq.push(data);
    }

    int q;
    cin >> q;
    while(q--) {
        int x;
        cin >> x;

        if(x == 0) {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            Student val(name, roll, marks);
            pq.push(val);
            if(pq.empty()) cout << "Empty" << endl;
            else cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        }
        else if(x == 1) {
            if(pq.empty()) cout << "Empty" << endl;
            else cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        }
        else if(x == 2) {
            if(!pq.empty()) pq.pop();
            if(pq.empty()) cout << "Empty" << endl;
            else cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        }
    }

    return 0;
}