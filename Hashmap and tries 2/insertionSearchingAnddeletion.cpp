#include<iostream>
using namespace std;


class TrieNode{

       public:
       char data;
       TrieNode* children[26];
       bool isTerminal;

       TrieNode(char d){
           this->data = d;
           for(int i=0;i<26;i++){
              children[i] = nullptr;
           }
           isTerminal = false;
       }

};



void insertWord(TrieNode* root,string word){

  
    // base case
    if(word.length() == 0){
        root->isTerminal = true;
        return ;
    }

    char ch = word[0];
    int index = ch-'a';
    TrieNode* child;

    // present or not checking 
    if(root->children[index] != nullptr){
        // character present 
        child = root->children[index];
    }
    else{
        // character is not present 
        child = new TrieNode(ch);
        root->children[index] = child;
        
    }

    //  recursive call
    insertWord(child,word.substr(1));
}

bool searchWord(TrieNode* root, string word){

    // base case
    if(word.length()==0){
        return root->isTerminal;
    }

    char ch= word[0];
    int index=ch-'a';
    TrieNode* child;

    if(root->children[index]!=nullptr){
        child=root->children[index];
    }
    else{
        return false;
    }

    // recursive call
   return searchWord(child,word.substr(1));
}

void deleteWord(TrieNode* root,string word){
    // base case
    if(word.length()==0){
        root->isTerminal=false;
        return ;
    }

    char ch=word[0];
    int index=ch-'a';
    TrieNode* child;

    if(root->children[index]!=nullptr){
        child=root->children[index];
    }
    else{
        return ;
    }

    deleteWord(child,word.substr(1));
}

int main(){

    TrieNode* root = new TrieNode('-');

    insertWord(root,"coding");
    insertWord(root,"code");
    insertWord(root,"coder");
    insertWord(root,"codehelp");
    insertWord(root,"baba");
    insertWord(root,"baby");
    insertWord(root,"babbar");

    cout<<" searching "<<endl;

    if(searchWord(root,"coder")){
        cout<<" present"<< endl;
    }
    else{
        cout<< " absent "<<endl;
    }

     
    deleteWord(root,"coder");
    cout<<"after deleting"<<endl;

    if(searchWord(root,"coder")){
        cout<<" present"<< endl;
    }
    else{
        cout<< " absent "<<endl;
    }



       
    


    return 0;
}
