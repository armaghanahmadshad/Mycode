#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    vector<string> name;
    for(int i=0;i<5;i++){
        string n;
        cout<<"Enter names:";
        cin>>n;
        name.push_back(n);
    }
    for(int i=0; i<5;i++){
        cout<<name[i]<<endl;
    }
    return 0;
}