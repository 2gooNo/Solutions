#include <iostream>
using namespace std;
int main()
{
    int a, i;
    int b[5];
    for (i = 0; i < 5; i++)
    {
        cin >> b[i];
    }
    for (i = 0; i < 5; i++)
    {
        if (b[i] != 0 && b[i] != 1)
        {
            bool isPrime = true;
            for (int j = 2; j < b[i]; j++)
            {
                if (b[i] % j == 0)
                {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime)
            {
                cout << b[i] << " ";
            }
        }
    }
    return 0;
}