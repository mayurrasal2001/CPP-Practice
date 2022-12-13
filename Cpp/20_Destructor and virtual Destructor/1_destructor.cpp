#include <iostream>
using namespace std;

class test
{
    int *p;

public:
    test()
    {
        p = new int[10]; // when you create the memory dynamically in contructor then you should delete it at the time of destructor will called and 
        cout << "Contructor of Demo will called" << endl;
    }

    ~test()
    {
        delete[] p;
        cout << "Destructor of Demo will called" << endl;
    }
};

void fun()
{
    // test d;
    test *p = new test(); // when you create the object dynamically in heap only contructor will called
    delete p;             // for deleting the destructor we have explicitly delete the p
}

int main()
{
    fun();

    return 0;
}