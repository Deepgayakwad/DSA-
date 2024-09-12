#include<iostream>
using namespace std;

// value of variable  does not change in call by value
void update(int num){
    num++;
}

int main(){

   int num=7;

   cout<<" before "<<num<<endl;
   update(num);
   cout<<" after "<<num<<endl;
    return 0;
}