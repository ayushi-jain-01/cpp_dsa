// *****
// *****
// *****
// *****
// *****

// #include <iostream>
// using namespace std;
// int main(){
//     for (int i=0;i<=4;i++){
//         for (int i=0;i<=4;i++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     return 0;
// }


// *
// **
// ***
// ****
// *****

// #include <iostream>
// using namespace std;
// int main(){
//     for (int i=0;i<=4;i++){
//         for (int j=0;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
// }


// 1
// 12
// 123
// 1234
// 12345

// #include <iostream>
// using namespace std;
// int main(){
//     for (int i=1;i<=5;i++){
//         for (int j=1;j<=i;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     return 0;
// }


// 1
// 22
// 33
// 4444
// 55555

// #include<iostream>
// using namespace std;
// int main(){
//     for (int i=1;i<=5;i++){
//         for (int j=1;j<=i;j++){
//             cout<<i;
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     return 0;
// }


// *****
// ****
// ***
// **
// *

// #include <iostream>
// using namespace std;
// int main(){
//     for (int i=5;i>=1;i--){
//         for (int j=1;j<=i;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     return 0;
// }

//    *
//   ***
//  *****
// *******

// #include <iostream>
// using namespace std;
// int main(){
//     for (int i=0;i<5;i++){
//         for(int j=0;j<5-i;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<2*i-1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     return 0;
// }

// *******     
//  *****      
//   ***       
//    *        


// #include <iostream>
// using namespace std;
// int main(){
//     for (int i=4;i>0;i--){
//         for(int j=0;j<5-i;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<2*i-1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     return 0;
// }


//     *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *


// #include <iostream>
// using namespace std;
// int main(){
//     for (int i=1;i<6;i++){
//         for (int j=0;j<5-i;j++){
//             cout<<" ";
//         }
//         for (int j=0;j<2*i-1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for (int i=4;i>=1;i--){
//         for (int j=0;j<5-i;j++){
//             cout<<" ";
//         }
//         for (int j=0;j<2*i-1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *

// #include <iostream>
// using namespace std;
// int main(){
//     for (int i=0;i<5;i++){
//         for (int j=0;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     } 
//     for(int i=3;i>=0;i--){
//         for(int j=0;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
// }


// 1
// 01
// 101
// 0101
// 10101

// #include<iostream>
// using namespace std;
// int main(){
//     int row=5;
//     int digit;
//     for(int i=1;i<row+1;i++){
//         if (i%2==0){
//             digit = 0;
//         }else{
//             digit =1;
//         }
//         for (int j=1;j<=i;j++){
//             cout<<digit;
//             digit = 1-digit;
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     return 0;
// }


// 1      1
// 12    21
// 123  321
// 12344321

// #include<iostream>
// using namespace std;
// int main(){
//     for (int i=1;i<5;i++){
//         for (int j=1;j<=i;j++){
//             cout<<j;
//         }
//         for (int j=1;j<=2*(4-i);j++){
//             cout<<" ";
//         }
//         for (int j = i; j >= 1; j--) {
//             cout << j;
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     return 0;
// }


// 1 
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

// #include <iostream>
// using namespace std;
// int main(){
//     int num =1;
//     for (int i=1;i<6;i++){
//         for(int j=1;j<=i;j++){
//             cout<<num<<" ";
//             num++;
//         }
//         cout<<endl;
//     }
// }


// A
// AB
// ABC
// ABCD
// ABCDE

// #include<iostream>
// using namespace std;
// int main(){
//     for (char i='A';i<='E';i++){
//         for (char j='A';j<=i;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     return 0;
// }


// ABCDE
// ABCD
// ABC
// AB
// A

// #include <iostream>
// using namespace std;
// int main(){
//     for (char i='E';i>='A';i--){
//         for (char j='A';j<=i;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     return 0;
// }


// A
// BB
// CCC
// DDDD
// EEEEE

// #include <iostream>
// using namespace std;
// int main(){
//     for (char i='A';i<='E';i++){
//         for (char j='A';j<=i;j++){
//             cout<<i;
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     return 0;
// }


//    A
//   ABA
//  ABCBA
// ABCDCBA

// #include<iostream>
// using namespace std;
// int main(){
//     for (int i=0;i<4;i++){
//         for (int j=0;j<4-i;j++){
//             cout<<" ";
//         }
//         for (char j='A';j<='A'+i;j++){
//             cout<<j;
//         }
//         for (char j ='A'+i-1; j>='A';j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }
//     cout<<endl;
// }



// 5
// 45
// 345
// 2345
// 12345

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=5;i++){
//         for (int j=6-i;j<=5;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     return 0;
// }


// E
// DE
// CDE
// BCDE
// ABCDE

// #include<iostream>
// using namespace std;
// int main(){
//     for (int i=1;i<=5;i++){
//         for(char j='E'-(i-1);j<='E';j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     return 0;
// }


// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********


// #include <iostream>
// using namespace std;
// int main(){
//     cout<<"**********"<<endl;
//     for (int i=4;i>=1;i--){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         for(int j=2*i;j<=9;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }        
//         cout<<endl;
//     }
//     int a=9;
//     for (int i=1;i<=4;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         for(int j=(a-1);j>=1;j--){
//             cout<<" ";
//         }
//         a=a-2;
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }  
//     cout<<"**********";
// }


// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *


// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         for(int j=10-(2*i);j>=1;j--){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }        
//         cout<<endl;
//     }
//     for(int i=4;i>=1;i--){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         for(int j=2*i;j<=9;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }        
//         cout<<endl;
//     }
// }


// ****
// *  *
// *  *
// ****

// #include <iostream>
// using namespace std;
// int main(){
//     for(int row=1;row<=4;row++){
//         for(int col=1;col<=4;col++){
//             if (row==2 && col==2){
//                 cout<<" ";
//             }else if(row==2 && col==3){
//                 cout<<" ";
//             }else if(row==3 && col==2){
//                 cout<<" ";
//             }else if(row==3 && col==3){
//                 cout<<" ";
//             }else{
//                 cout<<"*";
//             }
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     return 0;
// }


// 4444444
// 4333334
// 4322234
// 4321234
// 4322234
// 4333334
// 4444444

// #include <iostream>
// using namespace std;
// int main(){
//     for(int row=1;row<=7;row++){
//         for(int col=1;col<=7;col++){
//             if (row==1 || row==7 || col==1 || col==7){
//                 cout<<"4";
//             }else if (row==2 || col==2 || row==6 || col==6){
//                 cout<<"3";
//             }else if(row==3 || row==5 || col==3 || col==5){
//                 cout<<"2";
//             }else{
//                 cout<<"1";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }