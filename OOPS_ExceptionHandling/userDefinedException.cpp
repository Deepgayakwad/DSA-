#include<iostream>
using namespace std;

class myException : public exception{
    public:
    const char* what() const noexcept override{

        return "user defined exception occured";
    }
};

void checkValue(int a){
    if(a<0)
    throw myException();
}

int main(){

    try{

        checkValue(-1);
    }
    catch(const myException& msg){
        cout<<msg.what()<<endl;
    }


    return 0;
}