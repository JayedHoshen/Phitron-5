#include <bits/stdc++.h>
using namespace std;

// int** fun() {
//     int *a = new int;
//     cout << "fun : " << a << endl;
//     *a = 100;
//     return &a; // return address
// }

int* fun() {
    int *a = new int;
    cout << "fun : " << a << endl;
    *a = 100;
    return a;
}

int main()
{
    // int **p = fun(); // receive address of pointer
    int *p = fun();
    cout << "main: " << p << endl;
    // int *x = new int;
    // *x = 10;
    // cout << x << " = " << *x << endl;
   
    return 0;
}