#include<iostream>
using namespace std;

bool checkPalindrome(string str,int i,int j){

    // base condition 
    if(i>j)
    return true;

    if(str[i]!=str[j])
        return false;
    else{
        return checkPalindrome(str,i+1,j-1);
    }
}

int main(){


    string nm="noon ";
cout<<endl;
   bool isPalindrome=checkPalindrome(nm,0,nm.length()-1);
   
   if(isPalindrome){
    cout<<"palindrome"<<endl;
   }
   else{
    cout<<"not palindrome"<<endl;
   }

    return 0;
}