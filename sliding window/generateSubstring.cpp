#include<iostream>
using namespace std;


int main(){


    string s="abbc";
    

    for(int i=0;i<s.size();i++){
          string substring="";
         for(int j=i;j<s.size();j++){
            substring+=s[j];

            cout<<substring<<" ";
         }
    }
}