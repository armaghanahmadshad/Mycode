#include<iostream>
using namespace std;
void check(int a);
int main(){
check(5);
check(6);
return 0;
}
void check(int a){
    if(a%2==0)
        cout<<"Even"<<endl;
    else
    cout<<"odd"<<endl;
}