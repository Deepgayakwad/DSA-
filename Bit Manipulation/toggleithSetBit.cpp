#include<iostream>
using namespace std;

int main(){

    int num=13;   // 1101

    int i=2;

    int ans= num ^(1<<i); // 1001 ie 9
    
    int ans1=num^(1<<1);
    cout<<"after toggle the 2th bit answer is "<<ans<<endl;
    cout<<"after the toogle the 1st bit answer is "<<ans1<<endl;
    


    return 0;
}