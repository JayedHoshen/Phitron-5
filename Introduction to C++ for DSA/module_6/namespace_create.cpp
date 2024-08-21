#include <bits/stdc++.h>
using namespace std;

namespace Rakib {
    int age = 24;
    void hello() {
        cout << "Rakib namespaces" << endl;
    }
}

namespace Sakib {
    int age = 34;
    void hello() {
        cout << "Sakib namespaces" << endl;
    }
}

using namespace Rakib;

int main()
{
    // cout << Rakib::age << " ";
    // Rakib::hello();

    cout << Sakib::age << " ";  
    Sakib::hello();

    cout << age << " ";
    hello();

    return 0;
}