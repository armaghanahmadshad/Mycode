#include<iostream>
using namespace std;
class Student{
    private:
    int roll;
    string name;
    public:
    void setdata(int r,string n){
        name=n;
        roll=r;
    }
    void display(){
        cout<<name<<endl;
        cout<<roll<<endl;
    }
};
int main(){
    Student s1;
    s1.setdata(4,"Armaghan");
    s1.display();

    return 0;
}