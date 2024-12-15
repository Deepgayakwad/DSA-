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

};

int main(){

   Heap h(20);
    h.insert(10);
    h.insert(20);
    h.insert(6);
    h.insert(11);
    h.insert(6);

   h.printHeap();


    



    return 0;
}
