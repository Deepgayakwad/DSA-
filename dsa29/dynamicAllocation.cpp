#include<iostream>
using namespace std;

int main(){
/*
   int n;
   cin>>n;
// create 2D array for same row and column
   int** arr=new int*[n];
   for(int i=0;i<n;i++){
    arr[i]=new int[n];
   }
//    taking input 
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
                        */


    // create 2D array for diff row and column using dynamic allocation
    int row;
    cin>>row;

    int col;
    cin>>col;

    int** arr=new int*[row];
   for(int i=0;i<row;i++){
    arr[i]=new int[col];
   }
//    taking input 
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //  relesing the memory
    for(int i=0;i<row;i++){
       delete [] arr[i];
   }

   delete [] arr;

    return 0;
}