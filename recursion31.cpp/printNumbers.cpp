#include<iostream>
using namespace std;

// recursive function to print numbers

void print(int n){

    // base condition 
    if(n==0)
    return ;

    // recursive relation 
    cout<<n<<endl;
    print(n-1);
}

int main(){
 
    int n;
    cin>>n;
     print(n);
    return 0;
}