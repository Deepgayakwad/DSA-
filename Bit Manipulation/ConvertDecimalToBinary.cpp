#include<iostream>
#include<algorithm>
using namespace std;

int main(){

     int num;
     cout<<"enter the number "<<endl;
     cin>>num;

     int n=num;

     if(num==0){
        cout<<"the binary representation of 0 is 0 "<<endl;
     }

     string result="";

     // convert into binary 

     while(num>0){
          
       result+=(num%2==0) ? '0':'1';
       num=num/2;
        
     }
     

     // reverse the string to get correct answer 
     reverse(result.begin(),result.end());

    cout<<" binary number of "<<n<<" is "<<result<<endl;

    return 0;
}