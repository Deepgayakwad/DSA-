#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){



    vector<int>a({10,20,30,40});

    int n=20;


   int index=upper_bound(a.begin(),a.end(),n)-a.begin();

   if(index<a.size()){
       cout<<"upper bound of 25 is present at index:"<<index<<" having value :"<<a[index]<<endl;
   }
   else{
       
       cout<<"no element is greater than :"<<n<<endl;
   }



    return 0;
}
