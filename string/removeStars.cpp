#include<iostream>
#include<stack>
#include<algorithm>
#include<string>

using namespace std;

int main(){
       stack<char>st;

    string name="leet**cod*e";

    // by removing  start and nearest left character it become -- lecoe
    


     

        for(int i=0;i<11;i++){
            

            if(name[i]!=42){
                st.push(name[i]);
            }
            else{
                st.pop();
            }
        }

        string str="";

        while(!st.empty()){
         str+=st.top();
            st.pop();
        }

        reverse(str.begin(),str.end());

        cout<<str<<endl;

    return 0;
}