#include<iostream>
using namespace std;
class Complex{
    private:
        int real;
        int img;
    public:
        Complex(int r=0, int i=0)
        {
            real = r;
            img  = i;
        }

        void Display()
        {
            cout<<real<<"i+"<<img<<endl;
        }

        friend Complex operator+(Complex c1,Complex c2);

};      //operator overloading using the friend function 
        //here the function will define without the scope resolution operator because of friend function
        Complex operator+(Complex c1,Complex c2)
        {
            Complex t;
            t.real = c1.real + c2.real;
            t.img  = c1.img  + c2.img;
            return t;
        }
int main(){
    Complex c1(3,5),c2(3,4),c3;
    c3 = c1 + c2;
    c3.Display();

return 0;
}