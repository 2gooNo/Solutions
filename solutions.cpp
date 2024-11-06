// #include <iostream>
// using namespace std;

// int main() {
//     int a,b,c,d,f,g,h,i,s;
    
// cin >>a;
// b=a;
// s=0;
// while(a>0){
//     s=s*10+a%10;
//     a=a/10;
// }
//     cout <<s;

//     return 0;
// }
// #include <iostream>
// #include <cmath>

// using namespace std;

// int main() {
//     int a,b,c,d,f,g,h,i,s;
    
// cin >>a;
// s=sqrt(a);
// b=floor(s);
// if(s-b==0){
//     cout <<"YES";

// }else{
//     cout <<"NO";

// }

//     return 0;
// }

// #include <iostream>

// using namespace std;
// int main() {
// int a,b,c,d,e,f,g,h,i,s;
// cin >>a;
// if(a==1||a==0){
//     cout <<1;
//     return 0;
// }
// for(d=1;d<a;d++){
// c=1;

// for(b=1;b<=d;b++){
//     c=c*b;
// }
// if(c==a){
//     cout <<d;
//     return 0;
// }
// }
// cout <<"No";

// return 0;
// }


// #include <iostream>

// using namespace std;
// int main() {
// int a,b,c,d,e,f,g,h,i,s;
// cin >> a;
// if(a==1||a==0){
//     cout <<1;
//     return 0;
// }
//     b=a;
// for(i=1;i<=a;i++){
//     if(b/i==0){
//         cout <<i-1;
//         return 0;
//     }
//     else{
//         b/=i;
//     }
// }
// cout <<"No";

// return 0;
// }
// #include <iostream>

// using namespace std;
// int main() {
// int a,b,c,d,e,f,g,h,i,s,max;
// cin >>a>>b;
// if(a<=b){
//     max=b;
// }else{
//     max=a;
// };
// c=a*b;
// for(i=max;i<=c;i++){
// if(i%a==0&&i%b==0){
//     cout <<i;
//     return 0;
// }
// }

// }
// #include <iostream>

// using namespace std;
// int main() {
// int a,b,c,d,e,f,g,h,i,s,max;
// cin >>a>>b;
// d=a;
// e=b;
// 	while(a!=b){
// 		if(a>b){
// 			a=a-b;
// 		}else{
// 			b-=a;
// 		}
		
// 	}
//     c=a;
//     cout <<d/a<<"/"<<e/a;
//     return 0;
// }
// #include <iostream>

// using namespace std;
// int main() {
// int a,b,c,d,e,f,g,h,i,s,max;
// cin >>a;
// b=a;
// for(i=1;i<a;i++){
// b=b*10+a;
// }
// cout <<b;
//     return 0;
// }
// #include <iostream>

// using namespace std;
// int main() {
// int a,b,c,d,e,f,g,h,i,s,max;
// cin >>a;

// for(i=0;i<a;i++){
//     if(i==0){cout <<i;}else{

// cout <<" "<<i;
//     }
// }
//     return 0;
// }
// #include <iostream>

// using namespace std;
// int main() {
// int a,b,c,d,e,f,g,h,i,s,max;
// cin >>a;

// for(i=9;i>=a;i--){
//     if(i==9){cout <<i;}else{

// cout <<" "<<i;
//     }
// }
//     return 0;
// }
// #include <iostream>

// using namespace std;
// int main() {
// int a,b,c,d,e,f,g,h,i,s,max;
// cin >>a;

// for(i=1;i<=a;i++){
// for(b=1;b<=a;b++){
//     if(b==a){
// cout <<b<<"\n";
//     }else{
//         cout <<b;
//     }
    
// }
// }
//     return 0;
// }
// #include <iostream>

// using namespace std;
// int main() {
// int a,b,c,d,e,f,g,h,i,s,max;
// cin >>a;

// for(i=1;i<=a;i++){
// for(b=a;b>=1;b--){
//     if(b==1){
// cout <<b<<"\n";
//     }else{
//         cout <<b;
//     }
    
// }
// }
//     return 0;
// }
// #include <iostream>

// using namespace std;
// int main() {
// int a,b,c,d,e,f,g,h,i,s,max;
// cin >>a;

// for(i=1;i<=a;i++){
// for(b=a;b>=i;b--){
//     if(b==i){
// cout <<" "<<b<<"\n";
//     }else{
//         cout <<" "<<b;
//     }
    
// }
// }
//     return 0;
// }
// #include <iostream>
// #include <cmath>
// #include <algorithm> // For std::max

// using namespace std;

// int main() {
//     int a, b, c;
//     cin >> a >> b >> c;

//     // Sort sides to ensure c is the longest
//     if (a > b) swap(a, b);
//     if (b > c) swap(b, c);
//     if (a > b) swap(a, b);

//     int d = pow(a, 2);
//     int e = pow(b, 2);
//     int f = pow(c, 2);

//     if (d + e == f) {
//         cout << "Right" << endl;
//     } else if (d + e < f) {
//         cout << "Obtuse" << endl;
//     } else {
//         cout << "Acute" << endl;
//     }

//     return 0;
// }
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int a, b, min_side, space, i;
    cin >> a >> b;
    
    
    min_side = min(a, b);
    space = a * b;
    
    for (i = min_side; i >= 1; i--) {
        int howMany = space / (i * i);
        if (howMany != 0) {
            cout << i << " " << howMany<<"\n";
            space -= i * i * howMany;
        }
    }
    
    return 0;
}