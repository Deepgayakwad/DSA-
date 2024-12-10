#include<iostream>
using namespace std;

int main(){


    int num=9; // 1001

    int i=2;

    num=(num |(1<<i)); // 1101 

    cout<<num<<endl;



    return 0;
}