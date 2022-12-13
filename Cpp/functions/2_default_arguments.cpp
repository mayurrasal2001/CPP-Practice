#include<iostream>
using namespace std;

 int sum(int x,int y,int z=15)    //default arguments
{
    return x + y + z;
}


int main(){
    int a=10 , b=20;
    cout<<sum(a,b);
    return 0;
}