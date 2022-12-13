#include<iostream>
using namespace std;
int z=40;
void function()
{
    static int x=0;
    int y=30;
    x=x+10;
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
    cout<<"z="<<z<<endl;
    cout<<endl;
}

int main(){
    function();
    function();  
    return 0;
}