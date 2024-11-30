#include<iostream>
using namespace std;

class Test{
   
       public:
       int x;

      explicit Test(int i){
        this->x=i;
       }

       void show(){
        cout<<"the value of x is "<<x<<endl;
       }


};


int main(){
   // Test t1=10;   gives an error 
    Test t1(10);  // explicit calling a function 

    


    return 0;
}
