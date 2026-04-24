#include<iostream>
using namespace std;
int main(){
    struct Book{
        int price;
        string name;
        string subject;
    };
    Book a1;
    a1.name="English Grammer";
    a1.price=500;
    a1.subject="English";
    cout<<"name:"<<a1.name<<"\nPrice:"<<a1.price<<"\nSubject:"<<a1.price;
    return 0;
}