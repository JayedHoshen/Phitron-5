#include <bits/stdc++.h>
using namespace std;

void fun(int *&p) {
    cout << p << endl;
    cout << &p << endl;
    // p = NULL;
}

int main()
{
    int val = 10;
    int *ptr = &val;

    cout << *ptr << endl;
    cout << ptr << endl;

    fun(ptr);

    cout << ptr << endl;
    cout << &ptr << endl;

    return 0;
}