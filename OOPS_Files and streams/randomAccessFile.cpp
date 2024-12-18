#include<iostream>
#include<fstream>
using namespace std;

int main(){

    fstream file("random_access.txt",ios::in | ios::out | ios::trunc);

    if(!file){
        cerr <<"error could not open file "<<endl;
        return 1;
    }

    // writing the data at specific positions
    file.seekp(0,ios::beg); // move to beggining 
    file << "line1"<<endl;
    
    file.seekp(20,ios::beg); // move to beggining 
    file << "line2"<<endl;

    file.seekp(40,ios::beg); // move to beggining 
    file << "line3"<<endl;

     // reading the data at specific positions 
      file.seekg(20,ios::beg);
      string line ;

      while(getline(file,line)){
         cout<<"data at position 20 is "<<line<<endl;
      }

      file.close();

     return 0;
}