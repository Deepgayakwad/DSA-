#include<iostream>
using namespace std;


class Test{

    private:
    static int number;

    public:
    static int increment_count();

};

int Test::increment_count(){
    return number++;
}

int Test::number=0;


int main(){

    Test a,b,c;

    cout<<a.increment_count()<<endl;   
    cout<<b.increment_count()<<endl;
    cout<<c.increment_count()<<endl;


    return 0;
}
