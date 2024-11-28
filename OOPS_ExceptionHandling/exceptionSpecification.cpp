#include<iostream>
using namespace std;


void functionA() noexcept{
   cout<<"this function guarantees no exception "<<endl;
}

void risky() throw(int){
      throw 10;
}

int main(){

    try{
        functionA();
    }
    catch(const char* msg){
        cout<<"caught exception is"<<msg<<endl;
    }



    return 0;
}