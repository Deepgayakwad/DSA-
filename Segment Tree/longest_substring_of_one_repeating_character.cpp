class Solution {
public:
 
  

   struct Node {
       
        int pre = 0;
        int suf = 0;
        int maxLen = 0;
        char leftChar = 0;
        char rightChar = 0;
   };

   int n ;
   vector<Node>segTree;


   void buildSegTree(int i , int l , int r, string& s){
       
          
             if(l == r){
                  
                   segTree[i] = {1,1,1,s[l],s[l]};
                   return;
             }
            
             int mid = l + (r - l)/2;
             buildSegTree(2*i+1,l,mid,s);
             buildSegTree(2*i+2,mid+1,r,s);

             segTree[i] = merge(segTree[2*i+1],segTree[2*i+2],mid-l+1,r-mid);
   }

   Node merge(Node& leftNode,Node& rightNode,int leftLen,int rightLen){
      
          Node res;
          res.leftChar = leftNode.leftChar;
          res.rightChar = rightNode.rightChar;


          res.pre = leftNode.pre;

          if(leftNode.pre == leftLen && leftNode.rightChar == rightNode.leftChar){
              
               res.pre = leftNode.pre + rightNode.pre;
          }

          res.suf = rightNode.suf;
          if(rightNode.suf == rightLen && leftNode.rightChar == rightNode.leftChar){
              res.suf = leftNode.suf + rightNode.suf;
          }

          res.maxLen = max(leftNode.maxLen,rightNode.maxLen);
          if(leftNode.rightChar == rightNode.leftChar){
              
               res.maxLen = max(res.maxLen,leftNode.suf+rightNode.pre);
          }

          return res;


   }

   void update(int i , int l,int r,int pos,char ch){
      
        if(l==r){
              
              segTree[i].leftChar = ch;
              segTree[i].rightChar = ch;
              return;
        }
         
           int mid = l + (r -l)/2;

           if(pos<=mid){ 
              
               update(2*i+1,l,mid,pos,ch);
           }
           else{
             
               update(2*i+2,mid+1,r,pos,ch);
           }

           segTree[i] = merge(segTree[2*i+1],segTree[2*i+2],mid-l+1,r-mid);
   }
    vector<int> longestRepeating(string s, string queryCharacters, vector<int>& queryIndices) {

        n = s.size();
        segTree.assign(4*n,Node());

        int k = queryCharacters.size();

        buildSegTree(0,0,n-1,s);


        vector<int>ans(k,0);

        for(int i = 0;i < k;i++){
              
               int pos = queryIndices[i];
               char ch = queryCharacters[i];

               update(0,0,n-1,pos,ch);

               ans[i] = segTree[0].maxLen;
               
        }

        return ans;
        
    }
};
