#include<iostream>
#include<fstream>
using namespace std;

int main(){

         // create a file and open it for writing in the file  where example.txt is file name
        ofstream outfile("example.txt");  

        // check if file is empty or not 
        if(!outfile){
             cerr << "error in file is occured "<<endl;
             return 1;
        }

        // writing in the file 
        outfile << "hey this is text file "<<endl;
        outfile << " we are demonstrating the file "<<endl;

        // close the file

        cout<<"file is created and written successfully "<<endl;
         outfile.close();
        
       // reading from the file 
       ifstream infile("example.txt");

       if(!infile){
         cerr << "error occured in infile"<<endl;
         return 1;
       }

       string line;
        cout<<"reading from file "<<endl;
       // reading the file 
       while(getline(infile,line)){
         cout<<line<<endl;
       }
       // after reading the file file is closing the file 
       infile.close();
      

      // append in file 

      ofstream appendfile("example.txt",ios::app);

      if(!appendfile){
         cerr <<"error opening the for appending the file "<<endl;
         return 1;
      }

      appendfile << "hey i am append text in file "<<endl;

      cout<<"appended successfully"<<endl;

      appendfile.close();
          
    // // deleting the file 
    // const char* filename="example.txt";

    //   if(remove(filename)==0){
    //      cout<<"file is delete successfully"<<endl;
    //   }
    //   else{
    //      cerr <<"file is not deleted "<<endl;
    //   }
      
      // renaming the file 
      const char* oldname="example.txt";
      const char* newName="dipakS era";

      if(rename(oldname,newName)==0){
         cout<<"file name is renaming succesfully"<<endl;
      }
      else{
         cerr << "error in renaming the file "<<endl;
      }
                                    

     return 0;
}