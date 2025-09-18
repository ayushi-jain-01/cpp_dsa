#include<iostream>
using namespace std;

void print(int arr[],int n){
    for (int i=0;i<n;i++){
        arr[i]+=100;
    }
    cout<<"Out"<<endl;
    for (int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
}
int main(){

    int n =5;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    print(arr,n);
    cout<<"In"<<endl;
    for (int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
    return 0;
    
}

