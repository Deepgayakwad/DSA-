#include<iostream>
using namespace std;


int main(){


    int *arr[10];

    int x,y,z;
    cout<<"enter the array elements whose address is to be store in array"<<endl;
    cin>>x>>y>>z;
     
     arr[0]=&x;
     arr[1]=&y;
     arr[2]=&z;


     for(int i=0;i<3;i++){
        cout<<"the value at address "<<arr[i]<<"is"<<*arr[i]<<endl;
     }



    return 0;
}
