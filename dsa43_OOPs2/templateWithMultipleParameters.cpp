#include<iostream>
using namespace std;

template<class T1,class T2, class T3>


class student{
    
    public:
    T3 name="Dipak";
    T1 roll_no=44;
    T1 marks=67;
    T2 percentage=56.25;

    void display(){


        cout<<"name of student is : "<<name<<endl;
        cout<<"roll number of student is:"<<roll_no<<endl;
        cout<<"marks of student is:"<<marks<<endl;
        cout<<"percentage of student is: "<<percentage<<endl;
    }



};


int main(){

    student<int,float,string>s1;

    s1.display();



    return 0;
}