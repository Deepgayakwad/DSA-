#include<iostream>
using namespace std;

class BaseException{
   public:

   virtual void message() const{

      cout<<"base exception is occured"<<endl;
   }


};

class DerivedException : public BaseException {
    public:

    void message() const override{
        cout<<"derived exception occured:"<<endl;
    }
};
void throwexception(bool isDerived){
    if(isDerived){
        throw DerivedException();
    }
    else{
        throw BaseException();
    }
}

int main(){

    try{
        throwexception(true);
    }
    catch(const BaseException& e){
        cout<<"excetion occured is :"<<endl;
        e.message();
    }



}