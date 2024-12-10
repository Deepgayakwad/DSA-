#include<iostream>
using namespace std;

int main(){

 
     int num=13; // 1101 
     int cnt=0;

     while(num!=0){

           num=(num&num-1);
           cnt=cnt+1;
     }

    cout<<"the number of set bits in the given number is "<<cnt<<endl;
    return 0;
}