#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    long long n, i, x, j,b,c;
    cin >> n>>b;
    vector <int> d;
    for(i=0;i<b;i++){
        cin >>c;
        d.push_back(c);
    }
    vector <int> a;
    a.push_back(1);
     a.push_back(2);
        a.push_back(4);
        bool e;
    for (i = 3; i < n; i++)
    {
        e=0;
        for(j=0;j<d.size();j++){
            if(i==d[j]-1){
                e=1;
                d.erase(d.begin()+j);
                break;
            }
        }
        if(e){
           a[i]=0;
        }else{
              a[i] = a[i - 2] + a[i - 1]+a[i-3];
        }
    }
    cout <<a[n-1];
    return 0;
}