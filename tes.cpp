#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 100;

    for (int i = 1; i <= n; i++)
    {
        if (__builtin_popcount(i) == 2)
        {
            for (int j = 1; j <= n; j++)
                cout << i << j << endl;
        }
    }

    return 0;
}
