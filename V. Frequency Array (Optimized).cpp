#include <iostream>

using namespace std;

int main() {

    unsigned int size = 0;
    unsigned int number = 1;

    cin >> size >> number;

    int* arr = new int[size];

    int* freq = new int[number + 1] {0};

    for (unsigned int i = 0; i < size; ++i)
    {
        cin >> arr[i];
        int x = arr[i];
        freq[x]++;
    }

    for (unsigned int i = 1; i < number + 1; ++i)
    {
        cout << freq[i] << endl;
    }

    return 0;
}
