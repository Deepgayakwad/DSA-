#include<iostream>
using namespace std;

int fib(int n){

    if(n==1) return 0;
     if(n==2) return 1;


     int ans=fib(n-1)+fib(n-2);

     return ans;
}

int main(){


  int n;
  cout<<"enter the term of fibonacci you want to found "<<endl;
  cin>>n;
  cout<< "the "<<n<<"th"<<" term of fibonacci series is "<<fib(n);


  return 0;
}
