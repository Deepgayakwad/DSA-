#include<iostream>
#include<map>
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

void storeBottomView(Node* root,queue<pair<Node*,int>>q, map<int,int>&myMap,int hd){

       if(root == nullptr) return ;

       q.push({root,hd});

       while(!q.empty()){
          pair<Node*,int> front=q.front();
          q.pop();

          Node* temp=front.first;
          int hd=front.second;

          
         
            myMap[hd]=temp->data;
          

          if(temp->left) q.push({temp->left,hd-1});
          if(temp->right)q.push({temp->right,hd+1});

       }
}


int main(){


    cout<<"enter the data for root node"<<endl;
    int data;
    cin >> data;
    Node* root = createTree(data);

    int hd=0;

    queue<pair<Node*,int>>q;
    map<int, int>myMap;


    storeBottomView(root,q,myMap,hd);

    for(auto it:myMap){
        cout<<it.second<<" ";
    }




    return 0;
}
