#include<iostream>
#include<vector>
using namespace std;


int main(){

    vector<pair<int,int>>ans;

    // insert pair into the vector

    ans.push_back({13,100});
    ans.push_back({19,200});
    ans.push_back({11,300});
    ans.push_back({2,400});
    ans.push_back({8,500});
    ans.push_back({6,600});


    // traversing the vector and print the each value 
    for(auto p:ans){
        cout<<"the element "<<p.first<<" is related with "<<p.second<<endl;
    }

    // to find the maximum number on the basis of first element of pair 
    // initialize the pair with first value of vector ans

    pair<int,int>max_pair=ans[0];

    for(auto p:ans){
        if(p.first>max_pair.first){
            max_pair=p;
        }
    }
    cout<<endl;

    cout<<" the pair with whose first element is greater"<<endl;
    cout<<max_pair.first<<" is related with "<<max_pair.second<<endl;


}
