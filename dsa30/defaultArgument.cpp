#include<iostream>
using namespace std;

// default argument 
void print(int arr[],int n,int start=0){
    for(int i=start;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){

// default argument

    int arr[5]={1,2,3,4,5};
    int size=5;
    print(arr,size);   //if start is not given then start printing from 0 index
    cout<<endl;
      print(arr,size,2); //printing from 2 index 
    return 0;
}