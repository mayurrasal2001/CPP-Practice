#include<iostream>
using namespace std;

class rahul;

class mayur
{
    private:
        int a;
    public:
        int b;
    protected:
        int c;
    
    friend rahul;
};

class rahul
{
    public:
        mayur m;
        void fun()
        {
            m.a=10;
            m.b=20;
            m.c=30;
        }
};

int main(){

return 0;
}