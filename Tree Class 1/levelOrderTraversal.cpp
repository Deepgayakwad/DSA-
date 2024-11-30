#include<iostream>
#include<queue>
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

void levelOrderTraversal(Node* root){

     queue<Node*>q;

     q.push(root);
    q.push(nullptr);

    while(!q.empty()){
        Node* frontNode = q.front();
        q.pop();

        if(frontNode==nullptr){

            cout<<endl;

            if(!q.empty()){
                q.push(nullptr);
            }

            

        }
        else{

            cout<<frontNode->data<<" ";
            if(frontNode->left) q.push(frontNode->left);
            if(frontNode->right) q.push(frontNode->right);
                
            

        }
    }

}

int main(){


    
   

     cout<<"enter the data for root node"<<endl;
    int data;
    cin >> data;
    Node* root = createTree(data);

     cout<<"level order traversal is"<<endl;
    levelOrderTraversal(root);
     

    return 0;
}