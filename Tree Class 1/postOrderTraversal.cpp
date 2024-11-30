#include<iostream>
using namespace std;


class Node{

     public:
     int data;
     Node* left;
     Node* right;

     Node(int d){
        this->data = d;
        this->left = nullptr;
        this->right = nullptr;
     }

};

Node* createTree(int data){

    
    if(data==-1){
        return nullptr;
    }

    // prepare a node for this data
    Node* root=new Node(data);

    // leftSubTree

    int leftData;
    cout<<"enter the value of leftData for "<<data<<endl;
    cin>>leftData;

    root->left=createTree(leftData);    

    // rightSubTree
    int rightData;
    cout<<"enter the value of rightdata for "<<data<<endl;
    cin>>rightData;

    root->right=createTree(rightData);

    return root;
}


void postOrderTraversal(Node* root){
    if(root == nullptr){
        return ;
    }

    // left
    postOrderTraversal(root->left);


     // right
    postOrderTraversal(root->right);


    // current node
    cout<<root->data<<" ";

    
}
 

int main(){


    cout<<"enter the data for root node"<<endl;
    int data;
    cin >> data;
    Node* root = createTree(data);

    cout<<"postorder traversal is "<<endl;
    postOrderTraversal(root);



    return 0;
}
