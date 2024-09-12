#include<iostream>
using namespace std;

int getSum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){

       // varible size array in heap memory by using 1D array 
     cout<<"enter the size of array"<<endl;
     int n;
     cin>>n;
    int* arr=new int[n];
     cout<<"enter the elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }


    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
int sum=getSum(arr,n);
cout<<"sum of array element is "<<sum<<endl;
    return 0;

}