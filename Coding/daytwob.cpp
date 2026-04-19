#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter your marks:";
    cin>>a;
    if(a>=90)
    cout<<"A";
    else if(a>=70)
    cout<<"B";
    else if(a>=50)
    cout<<"C";
    else
    cout<<"Fail";
}