#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    vector<string> students;
    for(int i=0;i<5;i++){
        string s;
        cout<<"Enter Student Name:";
        cin>>s;
        students.push_back(s);
    }
    for(string s:students){
        cout<<s<<endl;
    }
}