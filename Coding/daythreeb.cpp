#include<iostream>
using namespace std;
int main(){
    int a=1;
    int b;
    cout<<"Enter a Number :";
    cin>>b;
    while(a<=10){
        cout<<b<<" x "<<a<<" = "<<a*b<<endl;
        a++;
    }
}