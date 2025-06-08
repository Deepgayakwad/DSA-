#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void sortInDescendingOrder(vector<int>&vec){
      
      auto myLambda = [](int a ,int b){
           return a > b;
      };
      
      
      sort(vec.begin(),vec.end(),myLambda);
}
void print(vector<int>& vec){
      
      for(int element:vec){
           
           cout<<element<<" ";
      }
      
      cout<<endl;
}
int main(){
    
    
    vector<int> vec ={3,1,51,12,0,49,87,23};
    
    cout<<"sort in descending order by using the lambda function "<<endl;
    
    sortInDescendingOrder(vec);
    
    print(vec);
    
    
    
    return 0;
}
