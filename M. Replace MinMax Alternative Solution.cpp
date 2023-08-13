#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int size;
    cin >> size;

    int* arr = new int[size];

    for (int i = 0; i < size; ++i)
    {
        cin >> arr[i];
    }

    int* maxnum = max_element(arr, arr + size);
    int* minnum = min_element(arr, arr + size);

    // Calculate the indices directly while finding the min and max elements
    // The distance func() calculates the number of elements between the two arguments
    // arr indicates the beginning of the array (arr[0]) and the other element indicates (arr[i])
    // for example if the array is 4 1 2 10 50, so minnum = 1 at index '1' and maxnum = 50 at index '4'
    // the maxidx will hold the index value which is the same as the distance between the beginning of the array
    // and the number arr[0]->arr[4] from 0 to 4 there are 4 elements (numbers) so the index of the maxnum is '4'

    int maxidx = distance(arr, maxnum);
    int minidx = distance(arr, minnum);

    swap(arr[maxidx], arr[minidx]);

    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }

    delete[] arr; // Don't forget to free the dynamically allocated memory

    return 0;
}
