#include<iostream>
using namespace std;

class Shape{

    public:
     
     virtual void draw()=0;  // pure virtual function 


};

class Rectangle:public Shape{
    public:

    void draw() override{
        cout<<"drawing a rectangle"<<endl;
    }

};


int main(){

    Shape *str=new Rectangle();

    str->draw();


    return 0;
}
