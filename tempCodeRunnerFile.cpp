#include <iostream>
#include <vector>
using namespace std;

int main()
{
    
    // freopen("shuffle.in","r",stdin);
    // freopen("shuffle.out","w",stdout);

    int n, i,j;
    cin >> n;
    vector<int> pos(n);
    vector<int> ans(n);

    
    for (i = 0; i < n; i++)
    {
        cin >> pos[i];
    }
    for (i = 0; i < n; i++)
    {
        cin >> ans[i];
    }
    for (int j= 0; j < 3; j++)
    {
        vector<int> temp(n);
        for (i = 0; i < n; i++)
        {
            temp[i] = ans[pos[i] - 1];
        }
        ans = temp; 
    }
    for (i = 0; i < n; i++)
    {
        cout << ans[i] << "\n";
    }

    return 0;
}