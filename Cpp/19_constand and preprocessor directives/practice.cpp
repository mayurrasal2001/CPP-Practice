#include<iostream>
using namespace std;


void display(const int &x , int &y)
{
    cout<<x<<" "<<y<<endl;
    // //x++;                             you cannot modify the value of refrence variable
}

int main(){
    int a=10,b=20;
    display(a,b);
    cout<<"Main "<<a<<" "<<b<<endl;
return 0;
}












// #include <iostream>

// class demo
// {
// public:
//     const int a = 10;
//     mutable int b = 20;
//     int c =30;

//     void fun() const
//     {
//         std::cout << "value oa is = " << a << std::endl;
//         b++; 
//         std::cout << "value ofb is = " << b << std::endl;
        
//         c;
//         std::cout << "value of c  is=" << c << std::endl;
//     }
// };

// int main()
// {
//     const demo d;
//     d.fun();
// }