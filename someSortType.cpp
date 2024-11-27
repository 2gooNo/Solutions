#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long i, j, n;

    cin >> n;
    long long a[5] = {0};
    long long b[n];
    for (i = 0; i < n; i++)
    {
        cin >> b[i];
        a[b[i]]++;
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < a[i]; j++)
        {
            cout << j + 1 << " ";
        }
    }
    return 0;
}
