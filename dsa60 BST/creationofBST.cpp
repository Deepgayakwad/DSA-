#include<iostream>
#include<queue>
using namespace std;

class Node{

         public:

         int data;
         Node* left;
         Node* right;

         Node(int data){
            this->data=data;
            this->left=NULL;
            this->right=NULL;
         }

};

Node* insertIntoBST(Node* root,int data){

    if(root==NULL){
        // this is the first node we have to create 
        root=new Node(data);
        return root;
    }

    // no first node
    if(data<root->data){
        // insert in left
        root->left=insertIntoBST(root->left,data);
    }
    else{
        // insert in right
        root->right=insertIntoBST(root->right,data);
    }

    return root;
}

void takeInput(Node* &root){
    int data;
    cin>>data;

    while(data!=-1){
        root=insertIntoBST(root,data);
        cin>>data;
    }
}

void levelOrdered(Node* &root){
    // hame queue ka use karte hai 
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
      

    while(q.size()>1){
        Node* front=q.front();
        q.pop();

        if(front==NULL){
            // it indicate level is completed and we print for next node
            cout<<endl;
            // below line indicate that all next level nodes are inserted in queue then we have to push null
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
             cout<<front->data<<" ";
        if(front->left!=NULL){
            q.push(front->left);
        }

        if(front->right!=NULL){
            q.push(front->right);
        }
        }

        
    }
}

void preOrderTraversal(Node* root){

         if(root==NULL) return ;

         // NLR

         cout<<root->data<<" ";
         preOrderTraversal(root->left);
         preOrderTraversal(root->right);
  

}

void inOrderTraversal(Node* root){

         if(root==NULL) return ;

         // LNR

         
         inOrderTraversal(root->left);
         cout<<root->data<<" ";
         inOrderTraversal(root->right);
  

}

void postOrderTraversal(Node* root){

         if(root==NULL) return ;

         // LRN

         
         postOrderTraversal(root->left);
   
         postOrderTraversal(root->right);

         cout<<root->data<<" ";

  

}
Node* findNodeInBST(Node* root,int target){

       // base case
        if(root==NULL) return NULL;

        if(root->data==target){
            return root;
        }
        else if(target>root->data){
            return findNodeInBST(root->right,target);
        }
        else{
            return findNodeInBST(root->left,target);
        }
}

int minVal(Node* root){

    Node* temp=root;
    if(temp==NULL) return -1;

    while(temp->left!=NULL){
        temp=temp->left;
    }

    return temp->data;
}

int maxVal(Node* root){

    Node* temp=root;

    if(temp==NULL) return -1;

    while(temp->right!=NULL){
           temp=temp->right;
    }

    return temp->data;
}

Node* deleteNodeInBST(Node* root,int target){
    // base case
    if(root==NULL) return NULL;

    if(root->data==target){
        // to 4 case handle karo
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        else if(root->left!=NULL && root->right==NULL){
            Node* child=root->left;
            delete root;
            return child;
        }
        else if(root->right!=NULL && root->left==NULL){
            Node* child=root->right;
            delete root;
            return child;
        }
        else{

            // two childs are not NULL
            // find inorder predecssor in left subtree


            int inorderPre=maxVal(root->left);
            // replace root->data=inorderPre;
            root->data=inorderPre;

            // delete inorderPre from left subtree
            root->left=deleteNodeInBST(root->left,inorderPre);
            return root;


        }
    }
    else if(target<root->data){
        root->left= deleteNodeInBST(root->left,target);
    }
    else if(target>root->data){
        root->right= deleteNodeInBST(root->right,target);
    }
    return root;
}


    
    




int main(){


    



    Node* root=NULL;
cout<<"enter the value for node"<<endl;
    takeInput(root);

    cout<<"printing the tree value "<<endl;
    levelOrdered(root);
    cout<<endl;
//     cout<<"preorder traversal is "<<endl;
//     preOrderTraversal(root);
//     cout<<endl;

//     cout<<"inorder traversal is "<<endl;
//      inOrderTraversal(root);
//      cout<<endl;

//     cout<<"postorder traversal is "<<endl;
//     postOrderTraversal(root);
//    cout<<endl;

//    bool ans=findNodeInBST(root,155);
//    cout<<"present or not :"<<ans<<endl;

//    bool ans1=findNodeInBST(root,20);
//    cout<<"present or not :"<<ans1<<endl;

//    cout<<"the minimum value in BST is "<<minVal(root)<<endl;
//    cout<<"the maximum value in BST is "<<maxVal(root)<<endl;
 
    deleteNodeInBST(root,100);
     levelOrdered(root);

    return 0;
}