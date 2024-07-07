#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a = "hello";
    string b = "A";

    // append
    // a += b;
    // a.append(b);

    // push/pop a character 
    // a = "helloA"; // right
    // a = a+b; // right
    // a[5] = 'A'; // wrong
    // a.push_back('A'); // right
    // a.pop_back(); 

    // assign 
    // a = "Gelo";
    // a.assign("Gelo");

    // // erase 
    // string s = "HelloWorld";
    // s.erase(2, 3);
    // cout << s << endl;

    // erase and replace / insert
    string s = "HelloWorld";
    s.replace(5, 0, "-");
    // s.insert(5, "-");
    cout << s << endl;

    cout << a << endl;
    cout << b << endl;

    return 0;
}