#include<iostream>
#include<unordered_map>
using namespace std;


int main(){

    // creation  
    unordered_map<string,int>m;

    // insertion
    pair<string,int>p = make_pair("fortuner",9);
    m.insert(p);

    pair<string,int>p1("hyundai",6);
    m.insert(p1);

    m["tata"]=10;

     // access 
    cout<<m.at("fortuner")<<endl;
    cout<<m.at("hyundai")<<endl;

     cout<<m["tata"]<<endl;

     // search
     cout<<m.count("fortuner")<<endl;  // it return true or false whether fortuner is present or not
     
     if(m.find("fortuner")!=m.end()){
        cout<<"fortuner found"<<endl;
     }
     else{
        cout<<"fortuner not found "<<endl;
     }

     // 
     cout<<m["innova"]<<endl;  /* here print the 0 because there is no entry in map of innova then it create 
                                 the entry of innova in map after priting the 0 and size increased by 1  */
    
     cout<<m.size()<<endl;


     // traversing the map
     for(auto it:m){
        cout<<it.first<<"-->"<<it.second<<endl;
     }
     
    return 0;
}