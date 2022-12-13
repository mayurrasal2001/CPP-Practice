#include<iostream>
using namespace std;

class rectangle
{
    private:
        int l;
    protected:
        int b;
    public:
        int c;

    void fun()
    {
        l=10;
        b=20;
        c=30;
    }
};

class square : public rectangle
{
    public:
    int funSquare()
    {
        //l=1;   //private
        b=2;
        c=3;
        cout<<" "<<b<<" "<<c<<endl;
    }
};

int main(){
    square r;
    // r.l=10;
    // r.b=50;
    r.c=20;
    r.funSquare();
return 0;
}