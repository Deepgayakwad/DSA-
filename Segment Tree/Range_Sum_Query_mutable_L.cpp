class NumArray {
public:
 
    vector<long long>segTree;
    int m;

    void buildSegTree(vector<long long>&segTree , vector<int>& nums , int i , int l, int r){
         
            if(r == l){
                  
                   segTree[i] = nums[l];
                   return;
            }

            long long mid = l + (r - l)/2;
            buildSegTree(segTree,nums,2*i+1,l,mid);
            buildSegTree(segTree,nums,2*i+2,mid+1,r);


            segTree[i] = segTree[2*i+1] + segTree[2*i + 2];

    }
     
     long long findSum( vector<long long>&segTree , int i , int l , int r, int s , int e){
          
             
                if(r < s || l > e) return 0;

                if(l >= s && r <= e){
                       
                     return segTree[i];
                }

               long long mid = l + (r - l)/2;
                long long leftSum = findSum(segTree,2*i+1,l,mid,s,e);
                long long rightSum = findSum(segTree,2*i+2,mid+1,r,s,e);

                return leftSum + rightSum;
     }

     void updateSegTree(vector<long long>&segTree,int i , int l , int r,int index,int val){
          
            
               if(l == r){
                  
                    segTree[i] = val;
                    return ;
               }


              int mid = l + (r - l)/2;

              if(index <= mid){
                  
                   updateSegTree(segTree,2*i+1,l,mid,index,val); 
              }
              else{
                   updateSegTree(segTree,2*i+2,mid+1,r,index,val); 
              } 


              segTree[i] = segTree[2*i+1] + segTree[2*i+2];
     }
    NumArray(vector<int>& nums) {

        m = nums.size();
         
         vector<long long>temp(4*nums.size());
         segTree = temp;

         buildSegTree(segTree,nums,0,0,nums.size()-1);
         
    }
    
    void update(int index, int val) {
         
           updateSegTree(segTree,0,0,m-1,index,val);
    }
    
    int sumRange(int left, int right) {
        
           int sum = findSum(segTree,0,0,m-1,left,right);
           return sum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */
