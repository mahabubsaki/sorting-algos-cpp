#include <bits/stdc++.h>
using namespace std;
vector<int> quick_sort(vector<int> arr)
{
    if (arr.size() <= 1)
    {
        return arr;
    }
    int pivot = rand() % (arr.size());

    vector<int> less_equal;

    vector<int> greater;

    for (int i = 0; i < arr.size(); i++)
    {
        if (i == pivot)
        {
            continue;
        }
        if (arr[i] <= arr[pivot])
        {
            less_equal.push_back(arr[i]);
        }
        else
        {
            greater.push_back(arr[i]);
        }
    }

    vector<int> sorted_less = quick_sort(less_equal);
    vector<int> sorted_greater = quick_sort(greater);
    vector<int> sorted_all;
    for (int i = 0; i < sorted_less.size(); i++)
    {
        sorted_all.push_back(sorted_less[i]);
    }
    sorted_all.push_back(arr[pivot]);
    for (int i = 0; i < sorted_greater.size(); i++)
    {
        sorted_all.push_back(sorted_greater[i]);
    }
    return sorted_all;
}
int main()
{
    vector<int> a = {4, 2, 5, 12, 3};
    vector<int> ans = quick_sort(a);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    };
    return 0;
}