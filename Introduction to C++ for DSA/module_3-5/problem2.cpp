#include <bits/stdc++.h>
using namespace std;

class Cricketer {
public:
    int jersey_no;
	string country;
};

int main()
{
    Cricketer *dhoni = new Cricketer;

    dhoni->jersey_no = 18;
    dhoni->country = "India";

    Cricketer *kohli  = new Cricketer;

    // kohli = dhoni;
    kohli->jersey_no = dhoni->jersey_no;
    kohli->country = dhoni->country;

    delete dhoni;

    cout << kohli->jersey_no << " " << kohli->country << endl;

    return 0;
}