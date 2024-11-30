#include<iostream>
using namespace std;

class Base{

     public:

     Base(){
        cout<<"Base class constructor is called"<<endl;
     }

     virtual ~Base(){
        cout<<"base class destructor is called"<<endl;
     }

};

class Derived:public Base{

      public:

      Derived(){
        cout<<"derived class constructor is called"<<endl;
      }

      ~ Derived(){
        cout<<"derived class destructor is called"<<endl;
      }

};

int main(){

    Base *str=new Derived();  // base class pointer to derived object  

    delete str;  // delete derived object to ensure virtual destructor clean up 



    return 0;
}
