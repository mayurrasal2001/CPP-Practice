#include<iostream>
using namespace std;

class Mayur{
    public:
        int id;
        string name;

    void insert(int a, string b)
    {
        id = a;
        name = b;
    }

    void Display()
    {
        cout<<id<<" "<<name<<endl;
    }
};

int main()
{
    Mayur m1;
    m1.insert(282,"MayurRasal");
    m1.Display();

    m1.insert(284,"SwajitWakale");
    m1.Display();

    m1.insert(290,"Ramesh Rao");
    m1.Display();

    return 0;
}