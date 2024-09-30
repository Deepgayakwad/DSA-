#include<iostream>
using namespace std;


class A{

     private:
     int data;

     friend class B;

     A(){
        data=6;
     }


};

class B{
     public:

     int sub(int x){
        A obj;

       return obj.data-x;
     }


};


int main(){


    B b1;

    cout<<"the value is "<<b1.sub(2);


    return 0;
}
