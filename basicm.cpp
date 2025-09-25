// count the digits of a no.

// #include <iostream>
// using namespace std;
// int main(){
//     int a,b=0;
//     cin>>a;
//     if (a==0){
//         b=1;
//     }else{
//         while(a>0){
//             a=a/10;
//             b++;
//         }
//     }
//     cout<<b;
//     return 0;
// }

// reverse the no.

// #include <iostream>
// using namespace std;
// int main(){
//     int a,b=0;
//     cin>>a;
//     while (a>0){
//         int c= a%10;
//         b=b*10+c;
//         a=a/10;
//     }
//     cout<<b;
//     return 0;
// }

// check palindrome

// #include <iostream>
// using namespace std;
// int main(){
//     int d;
//     cin>>d;
//     int a=d,b=0;
//     while(a>0){
//         int c=a%10;
//         b=b*10+c;
//         a=a/10;
//     }
//     if (d==b){
//         cout<<"Yes";
//     }else{
//         cout<<"No";
//     }
//     return 0;
// }

// gcd or hcf

// #include <iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cin>>a>>b;
//     int c,gcd=1;
//     if (a<b){
//         c=a;
//     }else{
//         c=b;
//     }
//     for (int i=1;i<=c;i++){
//         if(a%i==0 && b%i==0){
//             gcd=i;
//         }
//     }
//     cout<<"gcd: "<<gcd<<endl;
//     return 0;
// }

// prime no.

// #include <iostream>
// using namespace std;
// int main(){
//     int a,b=0;
//     cin>>a;
//     for (int i=1;i<=a;i++){
//         if (a%i==0){
//             b+=1;
//         }
//     }
//     if (b==2){
//         cout<<"Yes, it's a prime no."<<endl;
//     }else{
//         cout<<"No";
//     }
//     return 0;
// }

// print all divisors

// #include <iostream>
// using namespace std;
// int main(){
//     int a;
//     cin>>a;
//     for(int i=1;i<=a;i++){
//         if (a%i==0){
//             cout<<i<<endl;
//         }
//     }
//     return 0;
// }

// lcm

// #include <iostream>
// using namespace std;
// int main(){
//     long long a,b;
//     cin>>a>>b;
//     int c,gcd=1;
//     if (a<b){
//         c=a;
//     }else{
//         c=b;
//     }
//     for (int i=1;i<=c;i++){
//         if(a%i==0 && b%i==0){
//             gcd=i;
//         }
//     }
//     cout<<"lcm: "<<(a*b)/gcd<<endl;
//     return 0;
// }

// armstrong no.
// text file as basic.txt

#include <bits/stdc++.h> 
using namespace std;
int main(){
    int num;
    cin>>num;
    int sum=0;
    int d= to_string(num).length();
    int t=num;
    while (t>0){
        int digit=t%10;
        sum=sum+(int)round(pow(digit,d));
        t=t/10;
    }
    cout<<sum;
    if (sum==num){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return 0;
}

