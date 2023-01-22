#include <bits/stdc++.h>
using namespace std;
int main()
{
    int totalNumbers;
    cin >> totalNumbers;
    int *arr = new int[totalNumbers];
    for (int i = 1; i <= totalNumbers; i++)
    {
        arr[i - 1] = i;
    }
    int range = ceil(sqrt(totalNumbers));
    arr[0] = 0;
    for (int i = 1; i < range; i++)
    {
        if (arr[i] != 0)
        {
            int start = 2, total = arr[i] * start;
            while (totalNumbers >= total)
            {
                arr[total - 1] = 0;
                start++;
                total = arr[i] * start;
            }
        }
    }
    for (int i = 0; i < totalNumbers; i++)
    {
        if (arr[i] != 0)
        {
            cout << arr[i] << endl;
        }
    }
    delete[] arr;

    return 0;
}