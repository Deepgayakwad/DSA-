#include <iostream>
using namespace std;
#include <map>

int main() {
    
    map<int,int>mpp;

    mpp[3]=4;
    mpp[2]=90;
    mpp[1]=1;

    for(auto it:mpp){
        cout<<it.first<<"  ______"<<it.second<<endl;
    }
}