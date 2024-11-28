#include<iostream>
using namespace std;

template<typename T>

class Calculate{
      
      public:
         T a;
         T b;

      Calculate(T a , T b){
          this->a=a;
          this->b=b;
      }


      T add(){

        return a+b;
      }

      T substract(){
        return a-b;
      }


};

int main(){

    Calculate<int>cal(10,20);

  cout<<"addition of two number is:"<<cal.add()<<endl;
  cout<<"substraction of two number is : "<<cal.substract()<<endl;



    return 0;
}