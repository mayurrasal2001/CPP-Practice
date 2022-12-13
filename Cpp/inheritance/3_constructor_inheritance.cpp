#include<iostream>
using namespace std;
class Base
{
    public:
        Base()
        {
            cout<<"Base class default contructor will called"<<endl;
        }

        Base(int x)
        {
            cout<<"Base class parametrized contructor will called "<<x<<endl;
        }  
};

class Derived:public Base
{
    public:
        Derived()
        {
            cout<<"Derived class default contructor will called"<<endl;
        }

        Derived(int x)
        {
            cout<<"Derived class parametrized contructor will called"<<endl;
        }

        //CONTRUCTOR INHERITANCE
        Derived(int x,int y):Base(x)
        {
            cout<<"Derived class Parameterizes contructor will called "<<y<<endl;
        }
};

int main(){
    Derived d;               //both class default called
    //Derived d(10);         //Base class default and derived para.. contructor will called
    //Derived d(10,20);     //here both class parametrized Will called #SPECIAL SYNTAX

return 0;
}