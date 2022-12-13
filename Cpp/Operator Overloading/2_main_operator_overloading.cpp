#include<iostream>
using namespace std;

class Complex{
    public:
        int real;
        int img;
        //OPERATOR OVERLOADING
        //This is automatically called when '+' is used with between two Complex objects
        Complex operator+(Complex c)
        {
            Complex t;
            t.real = real + c.real;
            t.img  = img  + c.img;
            return t;
        }
};

int main(){
    Complex c1,c2,c3;
    c1.real=10,c1.img=4;
    c2.real=4,c2.img=5;
    c3=c1 + c2;
    cout<<c3.real<<"i+"<<c3.img<<endl;
    return 0;
}