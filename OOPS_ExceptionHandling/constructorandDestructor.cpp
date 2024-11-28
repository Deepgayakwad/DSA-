#include<iostream>
using namespace std;


class Demo{
     public:

     Demo(){
        cout<<"constructor is called:"<<endl;
        throw "exception in constructor";
     }

     ~Demo(){
        cout<<"destructor is called:"<<endl;
     }

};


int main(){

    try{

        Demo obj;
    }
    catch(const char* msg){
        cout<<"exception is occured :"<<msg<<endl;
    }



    return 0;
}