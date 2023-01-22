#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int *array = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    for (int i = 1; i < size; i++)
    {
        int index = i;
        while (index >= 1)
        {
            if (array[index - 1] > array[index])
            {
                swap(array[index - 1], array[index]);
                index--;
            }
            else
            {
                break;
            }
        }
    }

    return 0;
}

// [ 5, 3, 1, 4, 3, 6, 9 ]