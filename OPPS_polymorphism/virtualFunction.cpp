#include<iostream>
using namespace std;

class shape{
   
    public:
    virtual void draw(){
        cout<<"Drawing the shape"<<endl;
    }

};

class circle : public shape{
   
   void draw() override{

       cout<<"drawing the circle"<<endl;
   }


};

class rectangle : public shape{
   
   void draw() override{

       cout<<"drawing the rectangle"<<endl;
   }


};




int main(){

    shape *shape1;
    circle c1;
    shape1=&c1;
    
    

    shape1->draw();

    rectangle r1;
    shape1=&r1;
    shape1->draw();

    
        //  shape1=new circle;
        // shape* shape2=new rectangle;

        // shape1->draw();
        // shape2->draw();

    




    return 0;
}