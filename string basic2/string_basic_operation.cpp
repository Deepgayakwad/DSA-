#include<iostream>
using namespace std;


int main(){

       string str="abcxyz";

       //str.insert(1,"x");  // stringname.insert(position,string name)
       // output is hxello
       //cout<<str<<endl;

       // to erase something from string 
      // str.erase(1,1);  // stringname.erase(position,length)

      // position: The starting index from which characters will be removed.
      //length: The number of characters to be removed.
      // cout<<str<<endl;  removes e
     // cout<<str.erase(1,2);  // remove 2 element from starting index 2 

    //  str.push_back('d');  // add character to last element 

    //  cout<<str<<endl;

    //  str.pop_back(); // removes last character of string

    //  cout<<str<<endl;

    // str.clear();  // give an empty string .clear which is used to make something empty   
    // cout<<str<<endl;


      //cout<<str.size()<<endl;   give the size of string 

     cout<<"to generate the substring by using altenative method"<<endl;
     for(int i=0;i<str.size();i++){
           
           for(int j=i;j<3;j++){
              
           }
     }



    return 0;
}
