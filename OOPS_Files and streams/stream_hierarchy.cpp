#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;

int main(){

    // main base function 
    ios::sync_with_stdio(false);


    // istream and ostream 
    int num;
    cout<<"enter a number "<<endl;
    cin>>num;
    cout<<"the number you entered is "<<num<<endl;

    // now main for file input and output 
    
     // creating the file and writing the data 
    ofstream file("temp.txt");

    if(!file){
        cerr << "file is not exist"<<endl;
    }

    file << " i am using hierarchy "<<endl;
    // closing the file 
    file.close();

    // reading the file 
    ifstream infile("temp.txt");

    string line ;
    while(getline(infile,line)){
         cout<<"data in the file is "<<line<<endl;
    }
    infile.close();
 

    // // stringstream
    stringstream ss;
    ss<<"this is hierarchy"<<endl;
    string output ;
    ss>>output;
    cout<<"stringstream output is  "<<output<<endl;


    return 0;
}