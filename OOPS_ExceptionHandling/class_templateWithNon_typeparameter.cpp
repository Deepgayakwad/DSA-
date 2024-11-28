#include<iostream>
using namespace std;

template<typename T,int size>
class A{
    public:

    T array[size];

    void set(int index,T value){

        if(index>=0 && index<size){
            array[index]=value;
        }
    }

    T get(T index){

        return (index>=0 && index<size) ? array[index]:T();
    }

};
int main(){

    A<int,5> obj;

    obj.set(0,10);
    obj.set(1,20);

    cout<<"array[0]:"<<obj.get(0)<<endl;
    cout<<"array[1]:"<<obj.get(1);


    return 0;
}