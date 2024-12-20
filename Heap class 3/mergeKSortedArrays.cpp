class node{
    
      public:
      int data;
      int i;
      int j;
      
      node(int data,int row,int col){
          
          this->data = data;
          this->i = row;
          this->j = col;
          
      }
    
    
};

class compare{
    
    public:
     bool operator()(node* a , node* b){
         
         return a->data > b->data;
     }
    
};

class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
       priority_queue<node*,vector<node*>,compare>minHeap;
       
       // step1 insert first element of all array into vector
       for(int i=0;i<K;i++){
           node* temp = new node(arr[i][0],i,0);
           minHeap.push(temp);
       }
       
       vector<int>ans;
       
       // step2 
       while(minHeap.size()>0){
           node* temp = minHeap.top();
           
           ans.push_back(temp->data);
           minHeap.pop();
           
           
           int i=temp->i;
           int j=temp->j;
           
           if(j+1<arr[i].size()){
               node* next=new node(arr[i][j+1],i,j+1);
               minHeap.push(next);
           }
       }
       
       return ans;
    }
};