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

void getleftView(Node* root , vector<int>&leftView , int level){
     
      if(root == nullptr) return ;


      if(level == leftView.size()){
        leftView.push_back(root->data);
      }

      getleftView(root->left,leftView,level+1);

      getleftView(root->right,leftView,level+1);


}


 

int main(){


    cout<<"enter the data for root node"<<endl;
    int data;
    cin >> data;
    Node* root = createTree(data);

    vector<int>leftView;
    int level=0;

    getleftView(root,leftView,level);

    cout<<endl;
    cout<<"left view of binary tree is "<<endl;

    for(int i=0;i<leftView.size();i++){
        cout<<leftView[i]<<" ";
    }



    return 0;
}
