#include<bits/stdc++.h>
using namespace std;

int main(){

    // hashing basic
  
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
   
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    // precomposite
    int Hash[100000]={0};

    for(int i=0;i<n;i++){
        Hash[arr[i]]+=1;
    }

     int q;
     cin>>q;

     while(q--){
        int number;
        cout<<"enter the numbers"<<endl;
        cin>>number;

        cout<<Hash[number]<<endl;
     }
    return 0;
}