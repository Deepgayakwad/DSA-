#include<iostream>
using namespace std;


// inline function
inline int getMax(int& a,int& b){
   return (a>b) ? a:b;
}             

int main(){
 

 
    int a=1,b=2;
    int ans=0;

    ans=getMax(a,b);
    // getmax is replace by (a>b) ? a:b; while running the code 
      //  does not need to call function 
    //   does not take any memory 
    cout<<ans<<endl;

    return 0;
}