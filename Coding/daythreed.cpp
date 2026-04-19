#include<iostream>
using namespace std;
int main(){
    int choice;
    do{
        cout<<"1. Welcome\n 2.Exit"<<endl;
        cin>>choice;
        if(choice==1)
        cout<<"Welcome Sir"<<endl;
    }while(choice!=2);
return 0;
}