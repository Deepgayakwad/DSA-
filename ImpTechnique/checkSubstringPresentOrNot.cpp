#include<iostream>
using namespace std;
  

bool checkSubStringPresentOrNot(string s,string subString){

        
         size_t pos=s.find(subString);  // check substring is present in string s or not 

         if(pos!=string::npos){
               
               return true;
         }

         return false;
}

int main(){



    string s="abcde";

    string subString="bc";  

    // check for " bd " present or not 


    if(checkSubStringPresentOrNot(s,subString)){
              
              cout<<"substring "<<subString<<" is present in string "<<s<<endl;
    }
    else{
          cout<<"substring "<<subString<<" is not present in string "<<s<<endl;
    }
}
