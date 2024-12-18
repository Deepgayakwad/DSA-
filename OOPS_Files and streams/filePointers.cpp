#include<iostream>
#include<fstream>
using namespace std;

int main(){


    fstream file;
    file.open("temp.txt",ios::out | ios::in | ios::trunc);

    if(!file){
         cerr << "file is not opening for file pointers"<<endl;
         return 1;
    }
    
    // writing to the file 
    file<<"hey i am dipak very excited for coding and new challenges"<<endl;

    //file.close();


    // writing the data at specific positions 
   file.seekp(7,ios::beg);

   file<<"i am using the file pointers"<<endl;
   cout<<"writing to the file "<<endl;

   // reset the pointers and read the data at specific positions 
    file.seekp(0,ios::beg);

    string line;
    while(getline(file,line)){
         cout<<line<<endl;
    }
    
    // to get the correct position of pointer
    cout<<"the position of get pointer is "<<file.tellg()<<endl;
    cout<<"the position of put pointer is "<<file.tellp()<<endl;




    return 0;
}