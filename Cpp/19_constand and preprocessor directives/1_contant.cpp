#include <iostream>
using namespace std;

// //5.
// class Demo
// {
//     public:
//         int x=10;
//         int y=20;
    
//     void Display() const
//     {
//         // //x++;                             means you cannot modify the value of the data members after writing const in front of the member functions
//         cout<<x<<" "<<y<<endl;
//     }
// };


// // 6.const to call by refrence
// void display(const int &x , int &y)
// {
//     cout<<x<<" "<<y<<endl;
//     // //x++;                             you cannot modify the value of refrence variable
// }
int main()
{
    // //1.Constant identifier
    // const int x=10;
    // //x++;                yo cannot modify it
    // cout<<x<<endl;

    // // 2.pointer of type integer constant
    int x=10;
    const int *ptr = &x;              
    *ptr++;                       //you cannot modify it
    cout<<*ptr<<" "<<x;

    // //3.pointer constant of type integer(means pointer cannot move to any other location but you can modify the first const ptr)
    // int x=10, y=20;
    // int * const ptr = &x;
    // ++*ptr;
    // cout<<*ptr<<" "<<x<<endl;

    // //ptr = &y;          pointer cannot move to any other location

    // //4.Pointer contant to integer constant(means pointer cannot move to any other location and you cannot modify the first const ptr)
    // int x=10;
    // const int * const ptr = &x;

    // //6.main mart
    // int a=10,b=20;
    // display(a,b);
    // cout<<"Main "<<a<<" "<<b<<endl;


    return 0;
}