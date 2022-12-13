#include<iostream>
using namespace std;

void swap(int &x, int &y)
{
    int t;
     t= x;
     x= y;
     y= t;
}

int main()
{
    int a=100;
    int b=200;

    swap(a, b);
    cout<<"Value of a= "<<a<<" Value of b= "<<b<<endl;


    return 0;
}