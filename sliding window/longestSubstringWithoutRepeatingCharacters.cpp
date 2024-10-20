#include<iostream>
using namespace std;


int main(){

      string s="cabzabcd";
      int Hash[256]={-1};

      int left=0;
      int right=0;
      int maxLength=0;

      while(right<s.size()){

           // first check its character is seen in map then increase left pointer only when its character position is greater than left 
           if(Hash[s[right]]!=-1){
              if(Hash[s[right]]>=left){
                left=Hash[s[right]]+1;
              }
              
           }

           // character is not seen in map then calculate longest substring without repeating characters
           maxLength=max(maxLength,right-left+1);
           Hash[s[right]]=right;
           right++;
           
      }


      cout<<"the maximum length of substring withOut reapeating characters is "<<maxLength<<endl;

    return 0;
}
