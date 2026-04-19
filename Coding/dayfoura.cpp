#include<iostream>
using namespace std;
void table(int b);
int main(){
  table(4);
  return 0;
}
  void table(int b){
    int a=1;
    cout<<"Enter a Number :";
    cin>>b;
    while(a<=10){
        cout<<b<<" x "<<a<<" = "<<a*b<<endl;
        a++;
    }
    }