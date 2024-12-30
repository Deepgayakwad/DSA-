class Solution {
public:
   
    int solveByRec(string& a,string& b,int i,int j){

           // base case 
           if(i>=a.length()){
                return b.length()-j;
           }
           if(j>=b.length()){
               return a.length()-i;
           }



           // recursive call 
           int ans=0;
           // matches the current character 
          if(a[i]==b[j]){
               ans=0+solveByRec(a,b,i+1,j+1);

          }
          else{
               // not matches then we can insert , delete , replace 
               int replace = 1+ solveByRec(a,b,i+1,j+1);
               int remove = 1+ solveByRec(a,b,i+1,j);
               int insert = 1+solveByRec(a,b,i,j+1);

               ans=min(replace,min(remove,insert));
          }

          return ans;
    }

    int solveByTopDown(string& a ,string& b,int i,int j,vector<vector<int>>&dp){
                 // base case 
           if(i>=a.length()){
                return b.length()-j;
           }
           if(j>=b.length()){
               return a.length()-i;
           }

           
           if(dp[i][j]!=-1){
               return dp[i][j];
           }
   
           // recursive call 
           int ans=0;
           // matches the current character 
          if(a[i]==b[j]){
               ans=0+solveByTopDown(a,b,i+1,j+1,dp);

          }
          else{
               // not matches then we can insert , delete , replace 
               int replace = 1+ solveByTopDown(a,b,i+1,j+1,dp);
               int remove = 1+ solveByTopDown(a,b,i+1,j,dp);
               int insert = 1+solveByTopDown(a,b,i,j+1,dp);

               ans=min(replace,min(remove,insert));
          }

          dp[i][j]=ans;

          return dp[i][j];

    }
    int solveByBottomUp(string& a,string& b,int i,int j){
          

          vector<vector<int>>dp(a.size()+1,vector<int>(b.size()+1,-1));

          for(int col=0;col<=b.length();col++){
               dp[a.length()][col]=   b.length()-col;
          }

          for(int row=0;row<=a.length();row++){
               dp[row][b.length()] = a.length()-row;
          }

          for(int i=a.size()-1;i>=0;i--){
               for(int j=b.size()-1;j>=0;j--){
                        
                      
                        // recursive call 
                        int ans=0;
                        // matches the current character 
                        if(a[i]==b[j]){
                            ans=0+dp[i+1][j+1];

                        }
                        else{
                            // not matches then we can insert , delete , replace 
                            int replace = 1+ dp[i+1][j+1];
                            int remove = 1+ dp[i+1][j];
                            int insert = 1+dp[i][j+1];

                            ans=min(replace,min(remove,insert));
                        }

                        dp[i][j]=ans;      
                    
               }
          }

          return dp[0][0];
    }

  int solveBySO(string& a, string& b){
       
       // create a vector
       vector<int>next(a.length()+1,0);
       vector<int>curr(a.length()+1,0);
      
        // for(int col=0;col<=b.length();col++){
        //        dp[a.length()][col]= b.length()-col;
        //   }

          for(int row=0;row<=a.length();row++){
               next[row] = a.length()-row;
          }


          for(int j=b.size()-1;j>=0;j--){
               
                curr[a.length()]=b.length()-j;   // MOST IMP dhurander of coding 
              for(int i=a.size()-1;i>=0;i--){
              
              
              
                        
                      
                        // recursive call 
                        int ans=0;
                        // matches the current character 
                        if(a[i]==b[j]){
                            ans=0+next[i+1];

                        }
                        else{
                            // not matches then we can insert , delete , replace 
                            int replace = 1+ next[i+1];
                            int remove = 1+ curr[i+1];
                            int insert = 1+next[i];

                            ans=min(replace,min(remove,insert));
                        }

                        curr[i]=ans;      
                    
               }

               // bhul jate hai
               next=curr;
          }

          return next[0];
      
               

  }
    int minDistance(string word1, string word2) {
         
         int i=0;
         int j=0;
         
        //  int ans=solveByRec(word1,word2,i,j);
        //  return ans;

        // solveByTopDown
         
        //  vector<vector<int>>dp(word1.size()+1,vector<int>(word2.size()+1,-1));
        // int ans1 = solveByTopDown(word1,word2,i,j,dp);
        // return ans1;

        // // solve ByBottomUp 
        // int ans2 = solveByBottomUp(word1,word2,i,j);
        // return ans2;


          // by using space optimization 

          int ans3= solveBySO(word1,word2);
          return ans3;
       
    }
};