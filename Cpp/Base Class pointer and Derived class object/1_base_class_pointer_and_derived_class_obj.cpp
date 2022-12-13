#include<iostream>
using namespace std;

class Base
{
    public:
        void Display()
        {
            cout<<"Base class function will called"<<endl;
        }
};

class Derived:public Base
{
    public:
        void show()
        {
            cout<<"Derived class function will called"<<endl;
        }
};

int main(){
    Derived d;
    Base *p=&d;
    p->Display();
    p->show();      //THESE LINE WILL THROW THE ERROR BUT HERE IS THE MAIN CONCEPT I.E BASE CLASS POINTER CANNOT ACESS THE DERIVED CLASS FUNCTION BY COMMENTING THESE ONE WE WILL GATE CORRECT OUTPUT

    return 0;
}