#include<iostream>
using namespace std;

//auto y=10;                  No prograam scope allow to the auto storage class it will throws error auto storage class have only block of scope and method scope is allow
int x=13;                     //global variable
int main(){

    int x=10;
    {
        auto x=20;
        cout<<x<<" "<<endl;
    }
    cout<<x<<" ";                    //here the function scope x=10 will print

    //cout<<x<<" ";                  //with commenting upper one line it will print the global variable i.e x=13
    return 0;
}