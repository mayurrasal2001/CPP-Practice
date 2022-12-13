#include<iostream>
using namespace std;


class Mayur{
    private:
        int one;
        int two;
        int sum;
    public:
        Mayur(void);

        void Display()
        {
            cout<<"Addition of two Numbers is:"<<one+two<<endl;
        }
};

Mayur :: Mayur(void)
{
    
}

int main()
{
    Mayur m1=Mayur(3,4);
    m1.Display();


}