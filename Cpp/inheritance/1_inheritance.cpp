#include<iostream>
using namespace std;

class Base
{
public:
    int h;
    void display()
    {
        cout<<"Display of the class Base "<<h<<endl;
    }
};


class Derived:public Base
{
public:
    void show()
    {
        cout<<"show of the class Derived";
    }
};

int main(){
    Derived c,d;

    c.h = 15;
    c.display();

    d.h=10;
    d.display();  //here we inherits the properties from the Base class and call by using the objects of the derived class 

    d.show();
    return 0;
}
