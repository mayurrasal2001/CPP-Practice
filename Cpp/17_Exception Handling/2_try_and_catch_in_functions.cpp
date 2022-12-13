#include<iostream>
using namespace std;

int division(int a, int b)
{
    if(b==0)                        //if error will occur then throw the error and it will comes inside the catch
        throw 1;
    return a/b;
}

int main(){
    int x=10,y=2,z;
    try
    {
        z=division(x,y);
        cout<<z<<endl;
    }
    catch(int e)
    {
        cout<<"The Number is divide by zero"<<endl;
    }
    cout<<"Bye"<<endl;
    return 0;
}