#include<iostream>
using namespace std;

int factorial(int n){
    // base condition 
    if(n==0)
    return 1;
 

    // recursive relation 
    int smallerpart=factorial(n-1);
    int biggerpart=n*smallerpart;

    return biggerpart;
}                                

int main(){

    int n;
    cout<<" enter a number "<<endl;
    cin>>n;
 
    int ans=factorial(n);
    cout<<"factorial of "<<n<<" is "<<ans<<endl;   

    return 0;
}