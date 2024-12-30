#include <iostream>
#include<vector>
using namespace std;

// by using recursion
int solveByRec(int n, int k){
        
        // base case 
        if(n==1) return k;

        if(n==2) return {k+k*(k-1)};


        int ans=(solveByRec(n-1,k)+solveByRec(n-2,k))*(k-1);

        return ans;
}

int solveUsingMem(int n,int k ,vector<int>&dp){
      
      // base case 
      if(n==1) return k;
      if(n==2) return (k+k*(k-1));

     // step3 check if answer is already exist then return it 
     if(dp[n]!=-1){
         return dp[n];
     }
         

       // step 2 store the answer and return the answer
       dp[n]=(solveUsingMem(n-2,k,dp)+solveUsingMem(n-1,k,dp))*(k-1);

       return dp[n];
}

int byUsingBottomup(int n,int k){

          // step 1 create a dp array 
          vector<int>dp(n+1,-1);

          // step2 initiallize the dp array by using the recursive relation 
        dp[1]=k;
        dp[2]=k+k*(k-1);

        // step 3 fill the remaining array or calculate it by using the relation 
        for(int i=3;i<=n;i++){
                dp[i]=(dp[i-2]+dp[i-1])*(k-1);
        }

        return dp[n];  // return where the for loop will finish or recurisive function parameter 
}

int solveByUsingSO(int n,int k){

        int prev1=k;
        int prev2=k+k*(k-1);

        int curr;

        if(n==2) return prev2;
        if(n==1) return prev1;

        for(int i=3;i<=n;i++){
                curr=(prev1+prev2)*(k-1);

                // update the prev1 and prev 2 
                prev1=prev2;
                prev2=curr;
        }

        return curr;
}

int main(){


     int n = 3;
     int k = 3;

    // int ans = solveByRec(n,k);
    // cout << " ans " << ans << endl;

//     vector<int>dp(n+1,-1);  // here you can take the size like n+10 because you access the nth index then size will be n+1 or above that 
//     int ans1=solveUsingMem(n,k,dp);
//     cout<<"Ans:"<<ans1<<endl;


//        int ans2=byUsingBottomup(n,k);
//        cout<<"Ans:"<<ans2<<endl;

      int ans3=solveByUsingSO(n,k);
      cout<<"Ans:"<<ans3<<endl;
    return 0;
}