#include<iostream>
using namespace std;

int main(){

   int num=16;

   // check by taking another ex as 15 or other 

   if((num&num-1)==0){
    cout<<"number is power of two "<<endl;
   }
   else{
      cout<<"number is not power of two "<<endl;
   }

    return 0;
}