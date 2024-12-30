#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int solveByTopDownSO(string& a, string& b){
      
      // 
      vector<int>next(a.length()+1,0);
      vector<int>curr(a.length()+1,0);
     

       
              for(int j=b.length()-1;j>=0;j--){
                   for(int i=a.length()-1;i>=0;i--){
                       

                    int ans=0;
                    if(a[i]==b[j]){
                        ans=1+next[i+1];
                    }
                    else{
                            ans=0+max(next[i],curr[i+1]);
                    }

                    curr[i]=ans;

              }
              // shifting bool jate hai hamesha 
              next=curr;
         }
      return next[0];
}

int main(){

       string s="bbbab";

       string a=s;
       reverse(a.begin(),a.end());

       int ans=solveByTopDownSO(s,a);
       cout<<"longest palindrome subsequence is :"<<ans<<endl;
    return 0;
}
