#include<iostream>
using namespace std;

int main(int argc,char* argv[]){

      

        cout<<" the number of arguments "<<argc<<endl;
        cout<<"argument passed "<<endl;

        for(int i=0;i<argc;i++){
             cout<<"the argv["<<i<<"] = "<<argv[i]<<endl;
        }
    return 0;
}