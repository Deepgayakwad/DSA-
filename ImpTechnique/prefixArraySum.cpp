#include<iostream>
#include<vector>
using namespace std;


vector<int>prefixSum(vector<int>&arr,int size){
       
       vector<int> prefixArray(size);
       
        prefixArray[0]=arr[0];

        for(int i=0;i<size;i++){
            prefixArray[i]=prefixArray[i-1]+arr[i];
        }

    return prefixArray;
}


int main(){

     
      vector<int>arr={2,4,6,8};

    vector<int>prefixArrayAns=prefixSum(arr,4);

      for(int i=0;i<4;i++){
        cout<<prefixArrayAns[i]<<" ";
      }

    
    return 0;
}
