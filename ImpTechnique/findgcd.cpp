#include<iostream>
using namespace std;

int gcd(int a,int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }

    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }



    }
    return b;
}

int main(){

    int a;
    cout<<"enter 1st numbers"<<endl;
    cin>>a;

    int b;
    cout<<"enter 2nd numbers"<<endl;
    cin>>b;

    int ans=gcd(a,b);
    cout<<" gcd of "<<a<< "and "<<b<<" is "<<ans<<endl;
    return 0;
}
