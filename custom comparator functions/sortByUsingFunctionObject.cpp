#include <iostream>
using namespace std;
#include<vector>
#include<algorithm>

struct myComparator {
    
    bool operator()(int a ,int b){
        return a > b;
    }
};

void sortByFOInDescendingOrder(vector<int>& vec){
      
      
      sort(vec.begin(),vec.end(), myComparator());
      
      
}
void print(vector<int>& vec){
      
      for(int element:vec){
           cout<<element<<" ";
      }
}


int main() {
    
    vector<int> vec ={3,1,12,9,15,45,33};
    
    cout<< "sort in desceding order by using the function object "<<endl;
    
    sortByFOInDescendingOrder(vec);
    
    print(vec);

    return 0;
}
