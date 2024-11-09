#include<iostream>
using namespace std;

int main(){



    // take diffent number this is special case to take 20 
    int n=20;

    int num=n;
    int digit=0;

    while(n>0){

        int divisor=n%10;  

      if(divisor!=0){
        if((num%divisor)==0){
            digit++;
        }

      }
        n=n/10;
    }
    
   cout<<digit<<endl;
  



    return 0;
}
  

