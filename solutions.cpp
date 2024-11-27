// bodlogo 1

// #include <iostream>
// using namespace std;

// int main()
// {
//     int N;
//     cin >> N;
//     long long sum = 0;
//     for (int i = 1; i <= N; i++)
//     {
//         long long power = 1;
//         for (int j = 1; j <= N; j++)
//         {
//             power *= i;
//         }
//         sum += power;
//     }
//     cout << sum << endl;
//     return 0;
// }

// bodlogo 2

// #include <iostream>
// using namespace std;

// int main()
// {

//     int a, b;
//     cin >> a >> b;
//     while (a != b)
//     {
//         if (a > b)
//         {
//             a = a - b;
//         }
//         else
//         {
//             b -= a;
//         }
//     }
//     cout << a;
//     return 0;
// }

// bodlogo 3

#include <iostream>
using namespace std;
bool isPrime(int num)
{
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int arr[5];
    cout << "5 ширхэг тоо оруулна уу: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << "Анхны тоонууд: ";
    for (int i = 0; i < 5; i++)
    {
        if (isPrime(arr[i]))
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}