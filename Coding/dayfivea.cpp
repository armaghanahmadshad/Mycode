#include<iostream>
using namespace std;
int main(){
    int arr[5]={43,42,12,54,21};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}