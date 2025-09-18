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


#include <iostream>
using namespace std;
int main(){
    for (int i=1;i<6;i++){
        for (int j=0;j<5-i;j++){
            cout<<" ";
        }
        for (int j=0;j<2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for (int i=4;i>=1;i--){
        for (int j=0;j<5-i;j++){
            cout<<" ";
        }
        for (int j=0;j<2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}


