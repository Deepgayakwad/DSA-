class node{
    
    public:
    int val;
    int row;
    int col;

    node(int data,int r , int c){
        val = data;
        row = r;
        col = c;

    }


};

class compare{

    public:
    bool operator()(node* a, node* b){
        return a->val > b->val;
    }

};

class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {

        priority_queue<node*,vector<node*>,compare>minHeap;
        int k=nums.size();

        //step1 insert all first k elements of list into minHeap
       int maxi = numeric_limits<int>::min();
        int mini = numeric_limits<int>::max();

        for(int i=0;i<k;i++){
            int element=nums[i][0];

            mini=min(mini,element);
            maxi=max(maxi,element);

            minHeap.push(new node(element,i,0));
        }

        int start=mini,end=maxi;

        while(!minHeap.empty()){
            node* temp=minHeap.top();
            minHeap.pop();
          
             mini=temp->val;

             if(maxi-mini<end-start){
                start=mini;
                end=maxi;
             }

             if(temp->col+1<nums[temp->row].size()){
                int nextVal = nums[temp->row][temp->col + 1];
                maxi = max(maxi, nextVal);
                minHeap.push(new node(nextVal, temp->row, temp->col + 1));
             }
             else{
                break;
             }
        }
        return {start,end};
    }
};