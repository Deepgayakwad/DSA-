#include<iostream>
#include<vector>
using namespace std;

int main(){



    vector<int>a({10,20,30,40});

    int n=25;


   int index=lower_bound(a.begin(),a.end(),n)-a.begin();

   if(index<a.size()){
       cout<<"lower bound of 25 is present at index:"<<index<<" having value :"<<a[index]<<endl;
   }
   else{
       
       cout<<"lower bound of 25 is not present then answer is size of array:"<<endl;
   }



    return 0;
}
