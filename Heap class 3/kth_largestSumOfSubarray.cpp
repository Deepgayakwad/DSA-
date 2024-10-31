#include<iostream>
#include<queue>
using namespace std;



int findKthLargestSumofSubarray(int arr[],int size,priority_queue<int,vector<int>,greater<int>>pq,int k){

    for(int i=0;i<size;i++){
        int sum=0;

        for(int j=i;j<size;j++){
                sum+=arr[j];
               
               cout<<"sum of subarray is"<<sum<<endl;
                if(pq.size()<k){
                    pq.push(sum);
                }
                else{
                    if(sum>pq.top()){
                        pq.pop();
                        pq.push(sum);
                    }
                }
        }
    }

    return pq.top();
}


int main(){

   // min heap 
   priority_queue<int,vector<int>,greater<int>>pq;

   int arr[]={3,2,1};
   int n=3;
   int k=2;
   int found=findKthLargestSumofSubarray(arr,n,pq,k);


   cout<<"kth largest sum of subarray is : "<<found<<endl;

    return 0;
}