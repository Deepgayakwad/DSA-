#include<iostream>
#include<map>
#include<algorithm>
#include<vector>

using namespace std;

     


int main(){

     map<string,int>mpp;

      mpp["bob"]=56;
     mpp["alice"]=90;
     
     mpp["charlie"]=60;

     // priting the value according to keys in sorted ways
     for(auto it:mpp){
        cout<<it.first<<"-----"<<it.second<<endl;
     }

     // 1st push all pairs into vector
     vector<pair<string,int>>ans(mpp.begin(),mpp.end());

     // step 2 sort the vector according to second values of map
    sort(ans.begin(),ans.end(),[](const pair<string,int>& a, const pair<string,int>& b){

        return a.second<b.second;
    });

    cout<<"printing the value according to second value "<<endl;

    for(const auto& iterator:ans){
        cout<<iterator.first<<"-------"<<iterator.second<<endl;
    }

    return 0;
}