#include<iostream>
using namespace std;
int main(){

    //1. this nested for loop will create the matrix of 3X3
    int count=1;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<" "<<count;
            count++;
        }
        cout<<endl;
    }

    cout<<endl;

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(i>=j)
            {
                cout<<" * ";
            }
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(i<=j)
            {
                cout<<" * ";
            }
        }
        cout<<endl;
    }

    cout<<endl;

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(i>=j)
            {
                cout<<" * ";
            }
        }
        cout<<endl;
    }
    return 0;
}