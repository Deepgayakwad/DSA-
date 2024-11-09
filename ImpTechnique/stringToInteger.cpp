#include<iostream>
using namespace std;

int main(){



    // to convert the integer of string into the integer number 
    string str="123";

    int ans=0;
    for(int i=0;i<str.size();i++){
        char ch=str[i];

        int num=ch-'0';
        ans=ans*10+num;
    }
    cout<<ans<<endl;

    




    return 0;
}
