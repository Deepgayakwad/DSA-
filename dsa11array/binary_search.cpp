#include<iostream>
using namespace std;


// binary search 

int binarysearch(int arr[],int size,int key){
        
        int start=0;
        int end=size-1;

        int mid=start+(end-start)/2;

        while(start<=end){

            if(arr[mid]==key){
                return mid;

                
            }

            if(key>arr[mid]){

                start=mid+1;
            }
            else{
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        return -1;



}

int main(){


    int even[5]={2,4,6,8,10};


    int evenindex=binarysearch(even,5,2);
    cout<<"the index of 2 is "<<evenindex<<endl;
    

    return 0;
}