#include<iostream>
using namespace std;

void divide(int a , int b){

    try{

        if(b==0) throw "division error dividing by zero";

        cout<<"result"<<a/b<<endl;
    }
    catch(const char* msg){
         cout<<"Exception : 10"<<msg<<endl;
    }
}

int main(){

    int num1,num2;
    cout<<"enter two numbers"<<endl;
    cin>>num1>>num2;

    divide(num1,num2);


    return 0;
}