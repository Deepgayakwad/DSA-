#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

int main(){

     ofstream file;

     file.open("add.txt",ios::in | ios::app);

     if(!file.is_open()){
         cerr <<"error occured file is not open ";
         return 1;
     }

     cout<<"writing the content in the file "<<endl;
     char x='a';
     file.put(x);

    cout<<"reading the content in file "<<endl;


    char ch;

    // while(file.get(ch)){
    //      cout<<ch;
    // }

    file.clear();

    file.seekp(0, ios::end); // Sets the pointer at the end of the file


    // appending the new content in the file 
    cout<<"adding the new content in the file "<<endl;
    string newContent=" i am inserting in the file";

    for(char ch:newContent){
         file.put(ch);
    }

     cout<<"content added successfully"<<endl;
     file.close();
    
       

    return 0;
}