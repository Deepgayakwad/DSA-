class Solution {
  public:
   
   void buildSegTree(vector<int>&segTree , int i , int l , int r,int arr[]){
        
           if(l == r){
                
                segTree[i] = arr[l];
                return; 
           }
           
           int mid = l + (r-l) / 2;
           
           buildSegTree(segTree,2*i+1,l,mid,arr);
           buildSegTree(segTree,2*i+2,mid+1,r,arr);
           
           segTree[i] = segTree[2*i+1] + segTree[2*i+2];
           
           
   }
   
   int findQuerySum(vector<int>&segTree,int l , int r, int s , int e , int idx){
         
          if(r < s || l > e) return 0;
          
          if(l>=s && r <= e) return segTree[idx];
          
          
          int mid = l + (r - l)/2;
          
          int left = findQuerySum(segTree,l,mid,s,e,2*idx+1);
          int right = findQuerySum(segTree,mid+1,r,s,e,2*idx+2);
          
          return left + right;
   }
    vector<int> querySum(int n, int arr[], int q, int queries[]) {
        
        vector<int>segTree(4*n,0);
        
        buildSegTree(segTree,0,0,n-1,arr);
        
        vector<int>result;
        
        for(int i = 0;i < 2*q; i+=2){
             
              int start = queries[i] - 1;
              int end = queries[i+1] - 1;
              
              int currQSum = findQuerySum(segTree,0,n-1,start,end,0);
              
              result.push_back(currQSum);
              
              
        }
        
        return result;
        
    }
};