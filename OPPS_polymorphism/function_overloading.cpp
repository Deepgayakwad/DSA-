#include<iostream>
using namespace std;


class A{

      public:

      int a;
      int b;
      int c;

      A(int a,int b,int c){
        this->a=a;
        this->b=b;
        this->c=c;
    
      }

      void sum(int a,int b){
        cout<<a<<" --"<<b<<endl;
      }

      void sum(int a,int b,int c){
        cout<<a<<"--"<<b<<"--"<<c<<endl;
      }

};


int main(){

    A a1(10,10,10);

    a1.sum(8,7);
    a1.sum(8,7,6);



    return 0;
}