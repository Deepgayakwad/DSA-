// #include<iostream>
// #include<vector>
// using namespace std;

// // int solveUsingMemo(int n,vector<int>&dp){
// //      // base case 
// //      if(n==0 || n==1){
// //        return n;
// //      }


// //      // step 3 for dp 
// //      if(dp[n]!=-1){
// //         return dp[n];
// //      }

// //     // step 2 store the answer in array and return 
// //      dp[n]=solveUsingMemo(n-1,dp)+solveUsingMemo(n-2,dp);
// //      return dp[n];
// // }
// int main(){

//       int n;
//       cout<<"enter the term which is you want to find in fibonacci series"<<endl;
//       cin>>n;
      
//       // step 1 create a dp array 
//       vector<int>dp(n+1,-1);

//       int ans=solveUsingMemo(n,dp);
//       cout<<n<<" th term of fibonacci series is "<<ans<<endl;
//     return 0;
// }

// by using the tabulation method(bottom up method)


// #include<iostream>
// #include<vector>
// using namespace std;


// int solveUsingTabular(int n,vector<int>&dp){
       
//        //step 2 fill the first initiall dp array by base cases 
//        dp[0]=0;

//        if(n==0) return dp[n];
       
//        dp[1]=1;

       

//        // step 3 fill remaining dp array ko fill karo 
//        for(int i=2;i<n+1;i++){
//           dp[i]=dp[i-1]+dp[i-2];
//        }

//        return dp[n];
// }

// int main(){

//        int n;
//        cout<<"enter the term which is you want to find in fibonacci series"<<endl;
//        cin>>n;
      
//         // step 1 create a dp array 
//          vector<int>dp(n+1,-1);

//          int ans=solveUsingTabular(n,dp);
//          cout<<n<<" th term of fibonacci series is "<<ans<<endl;

//          return 0;
// }


// solve by using tabular space optimization 
#include<iostream>
using namespace std;

int solveUsingTabOptimization(int n){


       if(n==0) return 0;
       if(n==1) return 1;

       int curr=1;
       int prev=0;
       int ans;

       for(int i=2;i<=n;i++){

              ans=curr+prev;
              prev=curr;
              curr=ans;
       }


       return ans;


}

int main(){


       int n;
       cout<<"enter number to get fibonacci series "<<endl;
       cin>>n;

       int ans=solveUsingTabOptimization(n);
        cout<<n<<" th term of fibonacci series is "<<ans<<endl;

       return 0;
}

