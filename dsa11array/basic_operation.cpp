#include<iostream>
using namespace std;


// finding sum of elements in array

// int sumArray(int num[],int n){

//    int sum=0;
//    for(int i=0;i<n;i++){

//       sum=sum+num[i];
//    }
//    return sum;
// }


// finding max and min of an array

// int getmax(int num[],int n){

//     int maxi=INT_MIN;

//     for(int i=0;i<n;i++){

//         maxi=max(maxi,num[i]);
//     }

//     return maxi;
// }



// void printArray(int arr[] ,int size){

//     cout<<"printing the array"<<endl;
//     for(int i=0;i<size;i++){

//         cout<<arr[i]<<" ";
//     }

//     cout<<"counting is done "<<endl;

// linear search in array
bool search(int arr[],int size,int key){

    for(int i=0;i<size;i++){

        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
    
}



int main(){

 // declaring an array 
    // int marks[5];

    // accesing the values from an array 
    // int numbers[4]={8,0,4};
    // cout<<numbers[0]<<endl;

    // initializing an array 

    // int second[7]={7,9};

    // int n=7;

    // for(int i=0;i<n;i++){

    //     cout<<second[i]<<" ";
    // }


    // array with fucnction 

    // int third[15]={3,4};

    //  int n=15;
    // printArray(third,15);




    // to find the minimum and maximum value from array
//    int size;
//    cin>>size;

//    int num[100];

//    for(int i=0;i<size;i++){

//     cin>>num[i];
//    }

//    cout<<"maximum value of an array is "<<getmax(num,size)<<endl;


// finding sum of all elements in array

// int size;
//    cin>>size;

//    int num[10];

//    for(int i=0;i<size;i++){

//       cin>>num[i];
//    }

//    cout<<"the sum of all elements in array is "<<sumArray(num,size)<<endl;


// linear search in array

int arr[5]={9,0,-4,8,3};

cout<<"enter the key:"<<endl;

int key;
cin>>key;

bool found=search(arr,5,key);

if(found){
       cout<<"key is present"<<endl;
}
else{
    cout<<"key is absent "<<endl;
}






   return 0;


   


}