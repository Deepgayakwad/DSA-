#include<iostream>
using namespace std;

class Test{
   
       public:
       mutable int x;  /*here declare mutable ie means we can change the value x without this keyword we 
                       can not change the value for x in this class */

       int b;

       Test(int i){
        this->x=i;
        b=20;
       }

       void modify() const{
          x=20;
          b=b+100;    gives an error because b is not mutable and you try to change the value
       }

       void show() const {
        cout<<"the value of x is "<<x<<endl;
       }

       


};

int main(){

   const Test t(10);

   t.modify();
   t.show();



    return 0;
}
