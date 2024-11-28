#include<iostream>
using namespace std;


void functionA(){

    try{
        throw "error in funtion a is occured";
         

    }
    catch(...){
        cout<<"handling in function a  rethrowing exception "<<endl;
        throw;
    }
}


int main(){

    try{

        functionA();
    }
    catch(const char* msg){
        cout<<"cuaght in main function :  "<<msg<<endl;
    }
    


    return 0;
}