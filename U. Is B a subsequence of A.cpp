#include <iostream>

using namespace std;

int main() {

    unsigned int size1 = 0, size2 = 0;

    cin >> size1 >> size2;

    int* arr = new int[size1];
    int* arr2 = new int[size2];

    for (unsigned int i = 0; i < size1; ++i) {

        cin >> arr[i];
    }
    for (unsigned int i = 0; i < size2; ++i) {

        cin >> arr2[i];
    }

    unsigned int index = 0;

    for (unsigned int i = 0; i < size1 && index < size2; ++i) {

        if (arr[i] == arr2[index]) {
            
            index++;
        }
    }

    if (index == size2) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    delete[] arr;
    delete[] arr2;

    return 0;
}
