#include<iostream>
using namespace std;
class Base
{
    public:
        void display()
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

/* Here we use the base class pointer and assigns the derived class object but it will acess the base class function 
   it is right in case of the other functions but in case of function overriding it is wrong 
   virtual function ensures that correct function is called for an object.*/ 