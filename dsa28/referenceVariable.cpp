#include<iostream>
using namespace std;

int main(){

// create a reference varible
  int i=5;

  int &j=i;
  cout<<j<<endl;
  cout<<i<<endl;

  j++;
  cout<<j<<endl;
  i++;
  cout<<i<<endl;
    return 0;

}