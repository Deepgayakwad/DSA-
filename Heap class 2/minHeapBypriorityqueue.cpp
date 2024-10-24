#include<bits/stdc++.h>
using namespace std;


int main(){

     // min heap
     priority_queue<int,vector<int>,greater<int>>pq;


     pq.push(100);
     pq.push(90);
     pq.push(70);


     cout<<"min element of heap is "<<pq.top()<<endl;
     pq.pop();

     cout<<"min element of heap is "<<pq.top()<<endl;

     // check size priority queue
     cout<<"size: "<<pq.size()<<endl;

     // check priority queue is empty or not
     if(pq.empty()){
        cout<<"empty"<<endl;
     }
     else{
        cout<<"not empty"<<endl;
     }




    return 0;
}
