class Solution {
public:

   void buildSegTree(vector<int>&segTree, vector<int>& heights ,int i , int l, int r){
     
         if(l == r){
             
               segTree[i] = l;
               return ;
         }   



         int mid = l + (r - l) / 2;

         buildSegTree(segTree,heights,2*i+1,l,mid);         
         buildSegTree(segTree,heights,2*i+2,mid+1,r);

         int leftIdx = segTree[2*i+1];
         int rightIdx = segTree[2*i+2];

         if(heights[leftIdx] >= heights[rightIdx]){
              segTree[i] = leftIdx;
         }
         else{
             
              segTree[i] = rightIdx;
         }


   }
   int RMQ(vector<int>&segTree,vector<int>&heights,int i, int start,int end , int l , int r){
      
        
           if(r < start || l > end) return -1;
           if(l >= start && r <= end){
               
               return segTree[i];
           }


           int mid = l + (r - l) / 2;
           int leftIdx = RMQ(segTree,heights,2*i+1,start,end,l,mid);
           int rightIdx = RMQ(segTree,heights,2*i+2,start,end,mid+1,r);

           if(leftIdx == -1) return rightIdx;
           if(rightIdx == -1) return leftIdx;

           return ((heights[leftIdx]>=heights[rightIdx]) ?leftIdx:rightIdx);

   }
    vector<int> leftmostBuildingQueries(vector<int>& heights, vector<vector<int>>& queries) {
         int n = heights.size();
         
        // step 1 build the segment tree
        vector<int>segTree(4*n);

        buildSegTree(segTree,heights,0,0,n-1);
        vector<int>result;

        for(auto query:queries){
              
               
                 int s = query[0];
                 int e = query[1];

                 int lIdx = min(s,e);
                 int rIdx = max(s,e);

                 if(s == e){
                     
                      result.push_back(s);
                      continue;
                 }
                 else if(heights[rIdx] > heights[lIdx]){
                     
                       result.push_back(rIdx);
                       continue;
                 }

                 int l = rIdx + 1;
                 int r = n-1;
                 int result_idx = INT_MAX;


                 while(l <= r){
                      
                       
                      int mid = l + (r - l) / 2;

                      int idx = RMQ(segTree,heights,0,l,mid,0,n-1);
                     


                      if(heights[idx] > heights[s] && heights[idx] > heights[e]){
                           
                           result_idx = min(result_idx,idx);
                           r = mid-1;
                      }
                      else{
                         
                          l = mid+1;
                      }


                 }

                if(result_idx == INT_MAX){
                      
                      result.push_back(-1);
                }
                else{
                     
                      result.push_back(result_idx);
                }




        }

        return result;
    }
};
