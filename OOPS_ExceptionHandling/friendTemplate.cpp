#include<iostream>
using namespace std;

template<typename T>

class A{

    T data;

    public:
    A(T a){
        this->data=a;
    }


    friend void show(A<T>&a){

        cout<<"the value of object data is: "<<a.data<<endl;
    }


};

int main(){

     A<int> a(100);
     show(a);


    return 0;
}