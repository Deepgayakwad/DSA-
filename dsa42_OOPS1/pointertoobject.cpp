#include<iostream>
using namespace std;


class A{

      public:
      int num;

      A(int num){
         this->num=num;
      }

      void display(){
        cout<<"the value of num is "<<num<<endl;
      }


};


int main(){
    
      A a1(10);
      A *ptr;
      ptr=&a1;

      ptr->display();


    return 0;
}
