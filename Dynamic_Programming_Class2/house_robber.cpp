#include<iostream>
#include<vector>
using namespace std;


int solveUsingTopDown(int nums[],int index,vector<int>&dp,int n){
      
      if(index>=n) return 0;

      
      // step 3 in dp
      if(dp[index]!=-1){
         return dp[index];
      }


      int include=nums[index]+solveUsingTopDown(nums,index+2,dp,n);
      int exclude=0+solveUsingTopDown(nums,index+1,dp,n);
      dp[index]=max(include,exclude);
      return dp[index];
}


int solveUsingBottomUp(int nums[],int n,vector<int>&dp){

    //  step 1 dp array create ho gaya hai 

    // step2 first ke kuch answer dp array me fill karo 
    dp[n-1]=nums[n-1];

    // step 3 fill remaining dp array and return 

    for(int index=n-2;index>=0;index--){
         
         int ans=0;
         if(index+2<n){
            ans=dp[index+2];
         }

         int include=nums[index]+ans;
         int exclude=0+dp[index+1];

         dp[index]=max(include,exclude);

         
    }

    return dp[0];
}

int solveByUsingOptimisation(int nums[],int n){

      int prev=nums[n-1];

      int curr;
      int next=0;

      for(int index=n-2;index>=0;index--){

           int tempAns=0;
           if(index+2<n){
              tempAns=next;
           }

           int include=nums[index]+tempAns;
           int exclude=0+prev;

           curr=max(include,exclude);

           // bhul jata hu ye main
           next=prev;
           prev=curr;
      }

      return prev;
}

int main(){

   int nums[4]={1,2,3,1};

   int n=4;
   
    vector<int>dp(n,-1);
    int index=0;

   // int ans=solveUsingTopDown(nums,index,dp,n);

   // cout<<"robber can rob the amount "<<ans<<endl;

   // solveByUsingBottomUp

   
//    int ans2=solveUsingBottomUp(nums,n,dp);

//     cout<<"robber can rob the amount "<<ans2<<endl;

    int ans3=solveByUsingOptimisation(nums,4);
    cout<<"robber can rob the amount "<<ans3<<endl;


    return 0;
}