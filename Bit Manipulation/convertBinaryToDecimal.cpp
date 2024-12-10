#include<iostream>
using namespace std;

int main(){

    string ans="1101";

    int len=ans.size();

    int num=0;
    int power2=1;

    for(int i=ans.size()-1;i>=0;i--){
        
        if(ans[i]=='1'){
            num=num+power2;
        }

        power2=power2*2;
    }

    cout<<"the decimal number is number "<<ans<<" is "<<num<<endl;



    return 0;
}
