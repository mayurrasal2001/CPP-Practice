#include<iostream>
using namespace std;
class Base
{
    public:
        virtual ~Base()
        {
            cout<<"Base Destructor is called"<<endl;
        }
};

class Derived:public Base
{
    public:
        ~Derived()
        {
            cout<<"Derived Destructor is called"<<endl;
        }
};

int main(){
    Base *p = new Derived();
    delete p;

    return 0;
}