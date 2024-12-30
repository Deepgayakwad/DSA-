#include <iostream>
#include<vector>
using namespace std;

int solveUsingRecursion(int capacity,int wt[],int profit[],int index,int n){

    // base case 
    if(index == n-1){
        if(wt[index] <= capacity){
            return profit[index];
        }
        else{
            return 0;   // no profit  that is profit is zero 
        }
    }



    // include and exclude
    int include = 0;

    if(wt[index] <= capacity){
        include=profit[index]+solveUsingRecursion(capacity-wt[index],wt,profit,index+1,n);
    }

    int exclude;
    exclude = 0 + solveUsingRecursion(capacity,wt,profit,index+1,n);

    int ans=max(include,exclude);

    return ans;
}

int solveByTopDown(int capacity,int wt[],int profit[],int index,int n,vector<vector<int>>&dp){

      // base case 
      if(index >= n  || capacity<0){
        return 0;
      }

      // already exits

      if(dp[capacity][index]!=-1){
        return dp[capacity][index];
      }



      int include=0;
      if(wt[index] <= capacity){
          include=profit[index]+solveByTopDown(capacity - wt[index], wt,profit,index+1,n,dp);
      }

      int exclude=0;
      exclude=0+solveByTopDown(capacity, wt,profit,index+1,n,dp);

      dp[capacity][index]=max(include,exclude);

      return dp[capacity][index];
}

int solveByBottomUp(int capacity,int wt[],int profit[],int index,int n){

    // step 1 create a dp array 
    vector<vector<int>>dp(capacity+1,vector<int>(n+1,-1));


    for(int i=0;i<=capacity;i++){
         dp[i][n]=0;
    }


    for(int i=0;i<=capacity;i++){
         for(int j=n-1;j>=0;j--){

            int include=0;
            if(wt[j]<=i){
                include=profit[j]+dp[i-wt[j]][j+1];
            }

            int exclude=0;
            exclude=0+dp[i][j+1];

           dp[i][j]=max(include,exclude);


         }
    }

    return dp[capacity][0];
}

int topDownSO(int capacity,int wt[],int profit[],int n){

       vector<int>next(capacity+1,0);
       vector<int>curr(capacity+1,-1);


       for(int j=n-1;j>=0;j--){
           for(int i=0;i<=capacity;i++){
              
                 int include=0;
            if(wt[j]<=i){
                include=profit[j]+next[i-wt[j]];
            }

            int exclude=0;
            exclude=0+next[i];

              curr[i]=max(include,exclude);
           }
          // main step shifting 
           next=curr;
       }

       return curr[capacity];
}

int topDownSO2(int capacity,int wt[],int profit[],int n){
     
      vector<int>next(capacity+1,0);


      for(int j=n-1;j>=0;j--){
          for(int i=capacity; i>=0; i--){
                 
            int include=0;
            if(wt[j]<=i){
                include=profit[j]+next[i-wt[j]];
            }

            int exclude=0;
            exclude=0+next[i];

              next[i]=max(include,exclude);
           }
          // main step shifting 
          
          }

        return next[capacity];
}


int main(){

    int capacity = 50;
    int weight[]={10,20,30};
    int profit[]={60,100,120};
    int index=0;

    int n=3;

    // // solve using recursion 
    // int ans=solveUsingRecursion(capacity,weight,profit,index,n);
    // cout<<"maximum profit is :"<<ans<<endl;

    
    // by using top down approach for 2D dp
    vector<vector<int>>dp(capacity+1,vector<int>(n+1,-1));  // here capacity+1 are no of rows and index+1 is no of column 
        
    // int ans1=solveByTopDown(capacity,weight,profit,index,n,dp);
    // cout<<"maximum profit is :"<<ans1<<endl;


    // // by using the bottom up approach 
    // int ans2=solveByBottomUp(capacity,weight,profit,index,n);
    // cout<<"maximum profit is :"<<ans2<<endl;

    
    // // byTopDownwithSO
     
    // int ans3=topDownSO(capacity,weight,profit,n);
    // cout<<"maximum profit is :"<<ans3<<endl;

    
    // by using topDownSO2 

    int ans4=topDownSO2(capacity,weight,profit,n);
    cout<<"maximum profit is:"<<ans4<<endl;
    return 0;
}