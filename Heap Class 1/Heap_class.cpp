#include<iostream>
using namespace std;


class Heap{

       public:
       int *arr;
       int size;
       int capacity;


       Heap(int capacity){
          this->arr=new int[capacity];
          this->capacity = capacity;

          this->size = 0;

       }

       void insert(int val){
          
          if(size==capacity){
            cout<<"heap is overflow"<<endl;
            return;
          }

          // if size is not equal to capacity then we have to insert the element then 
          // size is going to increase
          size++;
          int index=size;
          arr[index]=val;


          // take the value to its correct position 
          while(index>1){
              int parentIndex=index/2;

              if(arr[index]>arr[parentIndex]){
                swap(arr[index],arr[parentIndex]);
                 index=parentIndex;
              }
              else{
                    break;
              }
          }

       }

       void printHeap(){
         for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
         }
       }


       int deleteFromHeap(){
           int answer=arr[1];

           int index=1;
           // replace your root ka element by last node value
           arr[1]=arr[size];

           // then delete the last element by decreasing the size
           size--;

           // then 2nd step we have to place root element at correct place
           while(index<size){
              // upto when your index is less than equal to size we have to perform hepipication 

              // consider first your largest index is current index

              int largestIndex=index;
              int leftIndex=2*index;
              int rightIndex=2*index+1;

              if(index<=size && arr[largestIndex]<arr[leftIndex]){
                 largestIndex=leftIndex;
              }

              if(index<=size && arr[largestIndex]<arr[rightIndex]){
                 largestIndex=rightIndex;
              }


              // if current index is your largest index that is both childs are less 
              if(largestIndex==index){
                 break;
              }
              else{
               // swap karo 
               swap(arr[index],arr[largestIndex]);
               index=largestIndex;
              }

           }

           return answer;
       }
};


void Heapify(int *arr,int size,int index){

      int leftIndex=2*index;
      int rightIndex=2*index+1;
      int largestIndex=index;

      // find greater between three
      if(leftIndex<=size && arr[largestIndex]<arr[leftIndex] ){
         largestIndex=leftIndex;
      }

      if(rightIndex<=size && arr[largestIndex]<arr[rightIndex]){
         largestIndex=rightIndex;
      }

      // after these three conditions largestIndex will point to the element greater amoung three
      if(index!=largestIndex){
         swap(arr[index],arr[largestIndex]);

         index=largestIndex;

         // now recursion will solve it
         Heapify(arr,size,index);
      }
    }


     void buildHeap(int arr[],int n){

      for(int index=n/2;index>0;index--){
          Heapify(arr,n,index);
      }
    }

    void HeapSort(int arr[],int n){
        while(n!=1){
           swap(arr[1],arr[n]);

           // decrease size 
           n--;
           Heapify(arr,n,1);
           
        }
    }


int main(){
        
        int arr[]={-1,5,10,15,20,25,12};   // here -1 insert extra because we want to work from 1st index and size is 6 from 1st index
       int n=6;
        Heap h(20);

       buildHeap(arr,6);
       cout<<"printing the heap"<<endl;

       for(int i=1;i<=n;i++){
         cout<<arr[i]<<" ";
       }
       cout<<endl;
       HeapSort(arr,n);

       cout<<"priting the heap after the sorting"<<endl;
       for(int i=1;i<=n;i++){
         cout<<arr[i]<<" ";
       }

   //      // insertion

   //      h.insert(10);
   //      h.insert(20);
   //      h.insert(5);
   //      h.insert(11);
   //      h.insert(6);
       
   //  cout<<"printing the content of heap :"<<endl;
   //  h.printHeap();
   //   cout<<endl;
   //  int ans=h.deleteFromHeap();
   //  cout<<"answer of delete root is "<<ans;

   //  cout<<endl;
   //  cout<<"then after deletion our heap become "<<endl;
   //  h.printHeap();
    
// 
    return 0;
}