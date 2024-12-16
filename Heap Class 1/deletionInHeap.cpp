#include<iostream>
#include<algorithm>
using namespace std;

class Heap {

   public:
    int *arr;
    int size;
    int capacity;


    Heap(int c){

         this->capacity=c;
        this->arr=new int[capacity];
        this->size=0;
      
    }

    void insert(int value){

    
       if(size==capacity){
          cout<<"heap overflow "<<endl;
          return ;
       }
        // step 1 insert at last position  but (initially insert at 1st position) 
        size++;
        int index=size;

        arr[index]=value;

        // step 2 put the value inserted in array or heap at its correct positions
        while(index > 1){

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

        // step 1 replace the 1st element with last element of heap 
        arr[1]=arr[size];

        // step 2 then delete the last element by reducing the size 
        size--;

        int index=1;

       

        while(index<size){

            int leftIndex=2*index;
            int rightIndex=2*index+1;

            int largestIndex=index;

            if(leftIndex <= size && arr[leftIndex]>arr[largestIndex]){
                largestIndex=leftIndex;
            }

            if(rightIndex <= size && arr[rightIndex]>arr[largestIndex]){
                largestIndex=rightIndex;
            }

            if(index!=largestIndex){
                swap(arr[index],arr[largestIndex]);
                index=largestIndex;

            }
            else {
                break;
            }
        }

        return answer;
    }

};

int main(){

   Heap h(20);
    h.insert(10);
    h.insert(20);
    h.insert(5);
    h.insert(11);
    h.insert(6);

   h.printHeap();

   int deleteAns=h.deleteFromHeap();
   cout<<"the deleted element is "<<deleteAns<<endl;

   cout<<"after deleting the element print the answer is "<<endl;
   h.printHeap();




    return 0;
}
