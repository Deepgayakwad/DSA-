#include<iostream>
using namespace std;


class A{

    private:
    int a,b;

    public:

    void get_msg(){
        a=10;
        b=20;
    }

    void print_msg(){
        int c=a+b;
        cout<<"addition of a and b is "<<c<<endl;
        cout<<"i am function of class A"<<endl;
    }



};

class B:public A{

     private:
     int a,b;

     public:

     void get_msg(){
        a=100;
        b=46;
     }

     void print_msg(){
        int c=a+b;
        cout<<"addition of a  and b is "<<c<<endl;
        cout<<"i am function of class B"<<endl;

     }

};


int main(){

    A obj_base;
    B obj_derived;

    obj_base.get_msg();
    obj_base.print_msg();

    obj_derived.get_msg();
    obj_derived.print_msg();


    return 0;
}
