#include<iostream>
#include<iomanip>
using namespace std;

int main(){
  

    // formating  output 
    int num=10;
    double pi=3.14578954;

    cout<<"the formatting output is "<<endl;
    cout<<"number is :"<<setw(10)<<num<<endl;  // set width for number is 10
    cout<<"the pi is "<<setprecision(2)<<fixed<<pi<<endl;  // it will print the 2 numbers after decimal point.

    // formating the input 
    int a,b;
    cout<<"enter two numbers "<<endl;
    cin>>a>>b;

    cout<<"the two numbers are "<<a<<" and "<<b<<endl;


    return 0;
}