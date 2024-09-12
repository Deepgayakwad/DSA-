#include<iostream>
#include<queue>
using namespace std;

class Node{

public:
   int data;
    Node* right;
    Node* left;

    Node(int val){
        this->data=val;
        this->left=NULL;
        this->right=NULL;
    }

};

Node* createTree(){
    cout<<"enter the value for node: "<<endl;
    int data;
    cin>>data;

    if(data==-1){
        return NULL;
    }

    // step1 create a new node 
    Node* root=new Node(data);


    cout<<"left of node :"<<root->data<<endl;

    // step 2 create a left subtree
    root->left=createTree();

    cout<<"right of node :"<<root->data<<endl;

    // step 3 create a right subtree
    root->right=createTree();

    return root;
}

void preOrdered(Node* root){
    // base condition 
    if(root==NULL){
        return ;
    }

    // NLR

    // N
    cout<<root->data<<" ";

    // L
    preOrdered(root->left);

    // R
    preOrdered(root->right);
}

void Inordered(Node* root){
    // base condition 
    if(root==NULL){
        return ;
    }

    // LNR

    // L 
    Inordered(root->left);

     // N
    cout<<root->data<<" ";

     // R
    Inordered(root->right);

}

void postOrdered(Node* root){
    // base condition 
    if(root==NULL){
        return ;
    }

//    LRN
   
     // L 
    postOrdered(root->left);

     // R
    postOrdered(root->right);

      // N
    cout<<root->data<<" ";

    
}

void levelOrdered(Node* root){
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

int main(){

    Node* root=createTree();
    // cout<<"data of root node"<<root->data<<endl;

    cout<<"pre ordered traversal "<<endl;
    preOrdered(root);

    cout<<endl;


    cout<<"in ordered traversal "<<endl;
     Inordered(root);

    cout<<endl;

    cout<<"post ordered traversal "<<endl;
    postOrdered(root);

    cout<<endl;
    cout<<"level ordered is "<<endl;

    levelOrdered(root);




    return 0;
}