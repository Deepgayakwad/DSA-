#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    map<int,int>mpp;

    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }


    // iterate through the map
    for(auto it :mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }

    int q;
    cout<<"enter the query"<<endl;
    cin>>q;

    while(q--){
        int number;
        cout<<"enter the number do you want to check"<<endl;
        cin>>number;
        cout<<mpp[number]<<endl;
}
    return 0;
}