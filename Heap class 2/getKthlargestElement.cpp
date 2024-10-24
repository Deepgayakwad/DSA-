#include<bits/stdc++.h>
using namespace std;



int getKthlargest(int arr[],int n,int k){

    priority_queue<int,vector<int>,greater<int>>pq;

    for(int i=0;i<k;i++){
        int element=arr[i];
      pq.push(element);
    }

    for(int i=k;i<n;i++){
        int element=arr[i];

        if(element>pq.top()){
            pq.pop();
            pq.push(element);
        }
    }

    return pq.top();
}


int main(){

    int arr[7]={3,7,4,5,8,6,9};   
    int n=7;

    int k=1;

    cout<<k<<"th largest element is "<<getKthlargest(arr,7,k);

    return 0;
}
