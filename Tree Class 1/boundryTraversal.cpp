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

    
    if(data == -1){
        return nullptr;
    }

    // prepare a node for this data
    Node* root = new Node(data);

    // leftSubTree

    int leftData;
    cout<<"enter the value of leftData for "<<data<<endl;
    cin>>leftData;

    root->left = createTree(leftData);    

    // rightSubTree
    int rightData;
    cout<<"enter the value of rightdata for "<<data<<endl;
    cin>>rightData;

    root->right = createTree(rightData);

    return root;
}

void boundryleft(Node* root , vector<int>&boundry){
    if(root == nullptr) return ;

    // condition for store left node but node include leaf node
    if(root->left == nullptr && root->right == nullptr) return ;

    boundry.push_back(root->data);


    if(root->left != nullptr){
        boundryleft(root->left , boundry);
    }
    else{
        boundryleft(root->right,boundry);
    }


  
}
void boundryLeaf(Node* root , vector<int>&boundry){

    if(root == nullptr) return ;

    if(root->left == nullptr && root->right == nullptr){
        boundry.push_back(root->data);
    }

    boundryLeaf(root->left ,boundry);
    boundryLeaf(root->right , boundry);



}
void boundryRight(Node* root , vector<int>&boundry){
    if(root == nullptr) return ;

    if(root->left == nullptr && root->right == nullptr) return ;

    if(root->right != nullptr){
        boundryRight(root->right,boundry);
    }
    else{
        boundryRight(root->left,boundry);
    }

    boundry.push_back(root->data);
}

 

int main(){


    cout<<"enter the data for root node"<<endl;
    int data;
    cin >> data;
    Node* root = createTree(data);

    vector<int>boundry;

    if(root == nullptr){
        cout<<" null"<<endl;
    }
    boundry.push_back(root->data);

    boundryleft(root->left,boundry);

    boundryLeaf(root->left, boundry);
    boundryLeaf(root->right,boundry);

    boundryRight(root->right,boundry);

    for(auto element:boundry){
        cout << element <<" ";
    }

    return 0;
}
