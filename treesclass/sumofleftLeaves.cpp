class Solution {
public:
    int sumofLeafNode(TreeNode* root,int& sum){
        if(root==NULL) return 0;

        if(root->left!=NULL && root->left->left==NULL && root->left->right==NULL){
            sum+=root->left->val;
        }
       sumofLeafNode(root->left,sum);
       sumofLeafNode(root->right,sum);

       return sum;
        
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        return sumofLeafNode(root,sum);
        
    }
};
