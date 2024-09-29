#include<iostream>
#include <stdio.h> 
#include <stdlib.h> 
#include<string>
#include <cstdlib>
using namespace std;


int main(){

     // string to integer 
      string name="56";

      int num=stoi(name);

      cout<<num<<endl;

      // intger to string 
      int number=78;
      cout<< " number"<<number<<"is convert into string is " <<to_string(number)<<endl;


      // basic operation on string 

      cout<<"some basic operation related to character"<<endl;
      char ch='a';
      char next=ch+1;
      cout<<"next character is "<<next<<endl; // b 

      // atoi  ascii value to integer
      const char *str="7997";
       int num1=atoi(str);

      cout<<num1<<endl;

      // 

      cout<<" to check the given the given character is lower case or uppercase"<<endl;
      char c='A';

      if(islower(c)){
         cout<<" character is lower "<<endl;
      }
      else{
         cout<<" character is not lowercase "<<endl;
      }

      if(isupper(c)){
         cout<<" character is uppercase "<<endl;
      }
      else {
        cout<<"character is not uppercase "<<endl;

      }


      //  to check the given character is alphanumeric or not alphanumeric means contain only alphabets(a,b,c...) and numbers 

      string str3="1*#a";

      if(isalnum(str3[0])){
         cout<<"character is alphanumeric"<<endl;
      }
      else{
        cout<<" character 1 is not alphanumeric"<<endl;
      }

      if(isalnum(str3[1])){
        cout<<"character * is alphanumeric "<<endl;
      }
      else{
         cout<<"character * is not alphanumeric "<<endl;
      }

      if(isalnum(str3[3])){
         cout<<" a is alphanumeric "<<endl;

      }
      else{
         cout<<" a is not alphanumeric "<<endl;

      }
      

    return 0;
}