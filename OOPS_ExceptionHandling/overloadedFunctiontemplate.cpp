#include<iostream>
using namespace std;

template<typename T>

T multiply(T a , T b){

    return a*b;
}
 
 // overload function only for integers 
int multiply(int a,int b){
    return a*b*2;
}

int main(){

    cout<<"multiplication of   a and b "<<multiply(1.1,2.2)<<endl;
    cout<<"multiplication of   a and b "<<multiply(1,2);


    return 0;
}