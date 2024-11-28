#include<iostream>
using namespace std;


template<typename T>

T findGreatest(T a,T b){
  
    return (a>b)? a:b;
}

int main(){

    cout<<"maximum of 20 and 10 is: "<<findGreatest(20,10)<<endl;
    cout<<"maximum of 2.2 and 10.3 is: "<<findGreatest(2.2,10.3)<<endl;
    cout<<"maximum of A and B is: "<<findGreatest('A','B')<<endl;


    return 0;
}