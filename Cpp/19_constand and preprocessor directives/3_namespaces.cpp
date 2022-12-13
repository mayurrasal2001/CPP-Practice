#include <iostream>
using namespace std;

namespace first
{
    void fun()
    {
        cout << "First" << endl;
    }
};

namespace second
{
    void fun()
    {
        cout << "Second" << endl;
    }
};

int main()
{
    first::fun();
    cout << endl;
    second::fun();
    return 0;
}