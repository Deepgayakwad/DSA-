#include<iostream>
using namespace std;

void heapify(int arr[],int n,int i){

    int index=i;
    int largestIndex=index;

    int leftIndex=2*index;
    int rightIndex=2*index+1;

    // step 2 find out the largest element amoung root and its childs

    if(leftIndex<=n && arr[leftIndex] > arr[largestIndex]){
        largestIndex=leftIndex;
    }

    if(rightIndex<=n && arr[rightIndex] > arr[largestIndex]){
        largestIndex=rightIndex;
    }

    if(index!=largestIndex){
        swap(arr[index],arr[largestIndex]);
        index=largestIndex;  // update the index

        heapify(arr,n,index);
    }
}

void buildHeap(int arr[],int n){


    for(int i=n/2;i>0;i--){
         heapify(arr,n,i);
    }
}



int main(){

    int arr[]={-1,12,15,13,11,14};

    int n=5;
    buildHeap(arr,n);

    cout<<"printing the heap:"<<endl;
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    
    


    return 0;
}
