#include<iostream>
using namespace std;

class Node{}

Node* constructTreefromPreAndIn(int preOrderd[],int inOrderd[],int& preIndex,int size,int inIndexStart,int inIndexEnd){
        // base case
        if(preIndex>=size || inIndexStart>inIndexEnd) {
            return NULL;
        }
}

int main(){

    int preOrderd[]={2,8,10,6,4,12};
    int inOrderd[]={10,8,6,2,4,12};
    int preIndex=0;

    int size=6;
    int inIndexStart=0;
    int inIndexEnd=5;



    return 0;
}