#include<bits/stdc++.h>
using namespace std;

int main(){


    string s;
    cout<<"enter the string "<<endl;
    cin>>s;

    int Hash[256]={0};

    for(int i=0;i<s.length();i++){
        Hash[s[i]]++;
    }

    int q;
    cout<<"enter the query"<<endl;
    cin>>q;

    while(q--){
        char ch;
        cin>>ch;

        cout<<Hash[ch]<<endl;
    }







    return 0;
}