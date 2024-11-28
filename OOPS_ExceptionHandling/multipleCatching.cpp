#include<iostream>
using namespace std;

void checkValue(int n){

    try{

        if(n<0){
            throw n;
        }
        else if(n==0){
            throw "is not valid ";
        }
        else{
            cout<<"valid value"<<n<<endl;
        }
    }
    catch(int num){
        cout<<"number is negative and not valid"<<num<<endl;
    }
    catch(const char* msg){
        cout<<"exception: "<<msg<<endl;
    }
}

int main(){

    int num1;
    cout<<"enter the number"<<endl;
    cin>>num1;

    checkValue(num1);

    



    return 0;
}