#include<iostream>
using namespace std;

int main(){


    int num=13;  // 1101

    int i=2;

     int ans=(num & ~(1<<i));

     cout<<ans<<endl;  // 1001 ie 9 

    return 0; 
}