#include<iostream>
using namespace std;

// to find first occurance and last occurance using binary search

int firstocc(int arr[],int n,int key){

    int start=0,end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;


    while(start<=end){

        if(arr[mid]==key){
             ans=mid;
            end=mid-1;



        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int lastocc(int arr[],int n,int key){

    int start=0,end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;


    while(start<=end){

        if(arr[mid]==key){
             ans=mid;
            start=mid+1;



        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int main(){

    int even[10]={1,3,4,6,8,8,8,8,8,18};

    int odd[7]={1,2,2,2,2,2,1};


    

    cout<<"first occurance of 8 is "<<firstocc(even,10,8)<<endl;
    // cout<<"last occurance of 8 is "<<lastocc(even,10,8)<<endl;

    cout<<"first occurance of 2 is "<<firstocc(odd,7,2)<<endl;
    // cout<<"last occurance of 2 is "<<lastocc(odd,7,2)<<endl;

    return 0;
}



