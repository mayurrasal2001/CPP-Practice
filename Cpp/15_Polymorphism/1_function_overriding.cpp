#include<iostream>
using namespace std;
class Base
{
    public:
        void display()
        {
            cout<<"Function Of base class"<<endl;
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
    d.display();

return 0;
}