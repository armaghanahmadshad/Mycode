#include<iostream>
using namespace std;
double sum(double a, double b){
return a+b;
}

double subtract(double a,double b){
    return a-b;
}

double product(double a, double b){
    return a*b;
}

double divide(double a, double b){
    return a/b;
}

int main(){
double a;
double b;
cout<<"enter first number";
cin>>a;
cout<<"enter second number:";
cin>>b;
cout<<"Sum:"<<sum(a,b)<<endl;
cout<<"Difference:"<<subtract(a,b)<<endl;
cout<<"Product:"<<product(a,b)<<endl;
cout<<"Division:"<<divide(a,b)<<endl;
    return 0;
}