#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){


    // creation of max heap
    priority_queue<int>pq;

    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);
    pq.push(50);


    cout<<"max element of heap is "<<pq.top()<<endl;
    pq.pop();


    cout<<"max element of heap is "<<pq.top()<<endl;
    // check out the size of priority queue
    cout<<"size :"<<pq.size()<<endl;

    // to check priority queue is empty or not
    if(pq.empty()){
         cout<<" empty"<<endl;
    }
    else{
        cout<<"empty"<<endl;
    }
       return 0;
}
