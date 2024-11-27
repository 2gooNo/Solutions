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
    long long a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        long long minimum = a[i];
        long long index = i;
        for (j = i; j < n; j++)
        {
            if (a[j] < minimum)
            {
                minimum = a[j];
                index = j;
            }
        }
        long long c = a[i];
        a[i] = minimum;
        a[index] = c;
    }
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
