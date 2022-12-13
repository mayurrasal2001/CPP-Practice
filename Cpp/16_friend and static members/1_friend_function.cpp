#include<iostream>
using namespace std;

class Base
{
    private:
        int a;
    public:
        int b;
    protected:
        int c;
    friend void rahul();
};

void rahul()
{
    Base b;
    b.a=10;
    b.b=20;
    b.c=30;
    cout<<" "<<b.a<<endl;
    cout<<" "<<b.b<<endl;
    cout<<" "<<b.c<<endl;
}


int main(){
    rahul();
    return 0;
}