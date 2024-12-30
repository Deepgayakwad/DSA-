#include<iostream>
#include<vector>
using namespace std;

int solveByUsingRecursion(string a,string b,int i,int j){
       
       // base case 
       if(i>=a.size() || j>=b.size()){
            return 0;
       }



       // recursive relation
       int ans=0;
       if(a[i]==b[j]){
           ans=1+solveByUsingRecursion(a,b,i+1,j+1);
       }
       else{
            ans=0+max(solveByUsingRecursion(a,b,i,j+1),solveByUsingRecursion(a,b,i+1,j));
       }


       return ans;
}

int solveByTopDown(string& a , string& b , int i,int j,vector<vector<int>>&dp){

         // base case 
       if(i>=a.size() || j>=b.size()){
            return 0;
       }

       // 
       if(dp[i][j]!=-1){
          return dp[i][j];
       }



       // recursive relation
       int ans=0;
       if(a[i]==b[j]){
           ans=1+solveByUsingRecursion(a,b,i+1,j+1);
       }
       else{
            ans=0+max(solveByUsingRecursion(a,b,i,j+1),solveByUsingRecursion(a,b,i+1,j));
       }
       dp[i][j]=ans;

       return dp[i][j];
}

int solveByBottomUp(string& a, string& b,int i,int j){
       vector<vector<int>>dp(a.size()+1,vector<int>(b.size()+1,0));

       
         for(int i=a.size()-1;i>=0;i--){
              for(int j=b.size()-1;j>=0;j--){
                    int ans=0;
                    if(a[i]==b[j]){
                        ans=1+dp[i+1][j+1];
                    }
                    else{
                            ans=0+max(dp[i][j+1],dp[i+1][j]);
                    }

                    dp[i][j]=ans;

              }
         }

         

         return dp[0][0];
}

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

    
      string text1="abc";
      string text2="dbc";

      int i=0;
      int j=0;

    //   int ans=solveByUsingRecursion(text1,text2,i,j);
    //    cout<<"length of common subsequence is :"<<ans<<endl;


    // // solve by Top Down approach 
    //  vector<vector<int>>dp(text1.size()+1,vector<int>(text2.size()+1,-1));
    // int ans2=solveByTopDown(text1,text2,i,j,dp);
    //  cout<<"length of common subsequence is :"<<ans2<<endl;
   


    // // solveByUsing Bottom Up 
    // int ans3=solveByBottomUp(text1,text2,i,j);
    //   cout<<"length of common subsequence is :"<<ans3<<endl;


    // solve By Using Space optimization 
    int ans4=solveByTopDownSO(text1,text2);
     cout<<"length of common subsequence is :"<<ans4<<endl;





       return 0;
}