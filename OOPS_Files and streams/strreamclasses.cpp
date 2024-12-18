#include<iostream>
using namespace std;

int main(){

    
    char ch;
    cout<<"enter the character "<<endl;
    cin.get(ch);   // istream class function 

    cout<<"character entered is "<<endl;
    cout.put(ch);   // ostream class function 
   cout<<endl;
    cout.write("object is created",1);  // print word size according to number 

     // ex "object",1   it will print only o like this 
    return 0;
}