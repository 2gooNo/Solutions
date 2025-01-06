#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    long long n, i, x, j;
    cin >> n;
    long long a[10000000];
    a[0] = 1;
    a[1]= 1;
    for (i = 2; i <= n; i++)
    {
        a[i] = a[i - 2] + a[i - 1];
    }
    cout << a[n];
    return 0;
}