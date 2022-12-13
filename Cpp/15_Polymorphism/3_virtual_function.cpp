#include<iostream>
using namespace std;
class Base
{
    public:
        virtual void display()
        {
            cout<<"Function Of Base class"<<endl;
        }
};



class Derived:public Base
{
    public:
        void display()
        {
            cout<<"Function of Derived class"<<endl;
        }
};


int main(){
    Derived d;
    Base *p = &d;
    p->display();

return 0;
}