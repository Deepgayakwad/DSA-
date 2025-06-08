#include <iostream>
using namespace std;
#include<algorithm>
#include<vector>

bool myComparator(int a , int b){
      
      if(a > b){
           return true;
      }
      return false;
}

void printSortElement(vector<int>vec){
     
     sort(vec.begin(),vec.end());
     
     for(int element:vec){
         cout<<element<<" ";
     }
     
     cout<<endl;
}

void sortDescendingOrder(vector<int>vec){
      
      sort(vec.begin(),vec.end(),myComparator);
      
      cout<<"printing the vector after sort in decreasing order ";
      
      for(int element:vec){
          cout<<element<<" ";
      }
}


int main() {
    
    
    // custom comparator for sorting the elements 
    
    vector<int> vec ={3,1,5,7,4,9};
    
    // sort the elements on the basis of ascending order 
    
    printSortElement(vec);

    
    // sort the element on the basis of descending order 
    
     sortDescendingOrder(vec);
    

   

    return 0;
}
