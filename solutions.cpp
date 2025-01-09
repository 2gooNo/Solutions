#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int counter (string a,string b){
    long long count=0;
for (int  i = 0; i+b.size()-1 <a.size(); i++)
{
    string temp=a.substr(i,b.size());
     if(b==temp){
         count++;
}
}
return count;
}

int main()
{
    int n,i;
    string s;
    cin >> n>>s;
    vector<string> fib(n+12);
    fib[1]="A";
    fib[2]="B";
    for(i=3;i<=12;i++){
            fib[i]=fib[i-1]+fib[i-2];
    }
    if(n<=12){
        cout << counter(fib[n],s)<<endl;
        return 0;
    }
        string fib_end[n+1];
        fib_end[12]=fib[12].substr(fib[12].size()-s.size()+1);
        fib_end[11]=fib[11].substr(fib[11].size()-s.size()+1);
        string fib_start[n+1];
        fib_start[12]=fib[12].substr(0,s.size()-1);
        fib_start[11]=fib[11].substr(0,s.size()-1);
        long long fib_count[n+1];
        fib_count[11]=counter(fib[11],s);
        fib_count[12]=counter(fib[12],s);
    for(i=13;i<=n;i++){
        fib_end[i]=fib_end[i-2];
        fib_start[i]=fib_start[i-1];
        fib_count[i]=fib_count[i-1]+fib_count[i-2]+counter(fib_end[i-1]+fib_start[i-2],s);
    }
    cout <<fib_count[n]<<endl;
    return 0;
}