#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> numbers;
    for(int i=0;i<5;i++){
        int a;
        cout<<"Enter the number:";
        cin>>a;
        numbers.push_back(a);
    }
    int sum=0;
    for(int n:numbers){
        sum+=n;
    }
    cout<<"The sum is :"<<sum;
return 0;
}