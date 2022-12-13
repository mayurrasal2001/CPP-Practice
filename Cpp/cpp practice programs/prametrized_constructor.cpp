#include<iostream>
using namespace std;

class Mayur{
    public:
        int id;
        float marks;
        string Dept;
    
    Mayur(int a, float b, string c)
    {
        id = a;
        marks = b;
        Dept = c;
        cout<<"Parametrized Contructor Called";
    }

    void Display()
    {
        cout<<id<<" "<<marks<<" "<<Dept<<" "<<endl;
    }
};

int main()
{
    Mayur m1= new Mayur();
    m1.Mayur(22,99.45,"Comp");
    m1.Display();

    Mayur m1= Mayur(84,93.45,"Comp");
    m1.Display();
}