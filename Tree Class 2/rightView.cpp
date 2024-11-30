#include<iostream>
#include<vector>
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

void getrightView(Node* root , vector<int>&rightView , int level){
     
      if(root == nullptr) return ;


      if(level == rightView.size()){
        rightView.push_back(root->data);
      }

      getrightView(root->right,rightView,level+1);

      getrightView(root->left,rightView,level+1);


}


 

int main(){


    cout<<"enter the data for root node"<<endl;
    int data;
    cin >> data;
    Node* root = createTree(data);

    vector<int>rightView;
    int level=0;

    getrightView(root,rightView,level);

    cout<<endl;
    cout<<"right view of binary tree is "<<endl;

    for(int i=0;i<rightView.size();i++){
        cout<<rightView[i]<<" ";
    }



    return 0;
}
