#include<iostream>
using namespace std;

int main(){

    // by using the left shift operator 

     int num=13;
     int i=1;

    // if(((num)&(1<<i))!=0){
    //     cout<<i<<"th bit is set bit "<<endl;
    // }
    // else{
    //     cout<<i<<"th bit is not set bit "<<endl;
    // }


    // by using the right shift operator 
    
    if(((num>>i)&1)==1){
        cout<<i<<"th bit is set bit "<<endl;
    }
    else{
        cout<<i<<"th bit is not set bit "<<endl;
    }


    return 0;
}