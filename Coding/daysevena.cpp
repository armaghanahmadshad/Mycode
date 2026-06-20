#include<iostream>
using namespace std;
class Student{
    private:
    string name;
    int age;
    public:
    Student(string n, int a ){
        name=n;
        age=a;
    }
    void display(){
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
    }
};
int main(){
    Student s1("Armaghan",15);
    s1.display();
    return 0;
}