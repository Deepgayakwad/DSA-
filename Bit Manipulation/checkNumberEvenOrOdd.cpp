#include<iostream>
using namespace std;

int main(){


    int num;
    cout<<"enter a number "<<endl;
    cin>>num;

    if((num&1)==0){
        cout<<"number is even"<<endl;
    }
    else{
        cout<<"number is odd"<<endl;
    }


    return 0;
}