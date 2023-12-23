#include <iostream>
#include <string>

using namespace std;

int main()
{
    string x, y;

    getline(cin, x);
    getline(cin, y);

    if (x.compare(y) < 0)
    {
        cout << x;
    }
    else
    {
        cout << y;
    }

    return 0;
}