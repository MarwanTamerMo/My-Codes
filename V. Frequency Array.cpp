#include <iostream>

using namespace std;

int main()
{
    unsigned int size = 0;
    unsigned int number = 1;

    cin >> size;
    cin >> number;

    int* arr = new int[size];

    for (unsigned int i = 0; i < size; ++i)
    {
        cin >> arr[i];
    }
    
    unsigned int z = 0;
    int* numberspassed = new int[size];

    while (z < size)
    {
        int current_number = arr[z];

        bool already_passed = false;

        for (unsigned int j = 0; j < z; ++j)
        {
            if (current_number == numberspassed[j])
            {
                already_passed = true;
                break;  
            }
        }

        if (already_passed)
        {
            z++;
            continue; 
        }

        unsigned int counter = 0;

        for (unsigned int j = 0; j < size; ++j)
        {
            if (current_number == arr[j] && arr[j] >= 1 && arr[j] <= number)
            {
                counter++;
            }
        }

        numberspassed[z] = current_number;
        cout << counter << endl;
        z++;
    }

    delete[] arr;
    delete[] numberspassed;

    return 0;
}
