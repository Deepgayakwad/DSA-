#include<iostream>
using namespace std;


class A{

      public:
      int num1;

};


class B:public A{
      public:
     int num2;

     void display(){
        cout<<"the value of num 1 and num2 is "<<num<<" and "<<num2<<endl;
     }
};


int main(){
    
      B b1;
      B *ptr;
      ptr=&b1;

      ptr->num1=100;
      ptr->num2=200;

      ptr->display();


    return 0;
}
