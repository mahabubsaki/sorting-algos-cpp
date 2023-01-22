#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size, pass = 1, iteration = 0;
    cin >> size;
    int *array = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    while (size > iteration)
    {
        int sorted = 1;
        for (int i = 0; i < size - pass; i++)
        {
            if (array[i] > array[i + 1])
            {
                // int temp = array[i];
                // array[i] = array[i + 1];
                // array[i + 1] = temp;
                swap(array[i], array[i + 1]);
                sorted = 0;
            }
        }
        if (sorted)
        {
            break;
        }
        iteration++;
        pass++;
    };
    for (int i = 0; i < size; i++)
    {
        cout << "element " << i << " " << array[i] << endl;
    }

    delete[] array;
    return 0;
}