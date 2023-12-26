#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    string x, y;

    unsigned short t = 1;

    cin >> t;

    cin.ignore();

    while (t--)
    {

        cin >> x >> y;

        for (size_t i = 0; i < max(x.size(), y.size()); ++i)
        {
            if (x[i] == '\0')
            {
                for (size_t j = i; j < y.size(); ++j)
                {
                    cout << y[j];
                }

                break;
            }
            else if (y[i] == '\0')
            {
                for (size_t j = i; j < x.size(); ++j)
                {
                    cout << x[j];
                }
                break;
            }
            else
            {
                cout << x[i] << y[i];
            }
        }

        cout << endl;
    }

    return 0;
}
