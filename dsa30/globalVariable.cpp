#include<iostream>
using namespace std;

int score=15;  //global varible 

void a(int &i){

    cout<<score<<" in a "<<endl;
    score++;    //any function change the value of global variable 
                // so it is bad practise to use global varible
}

void  b(int &i){

    cout<<score<<" in b "<<endl;
}




 
int main(){
   
 
      cout<<score<<" in main "<<endl;
      int i=5;
      a(i);
      b(i);
    return 0;
}