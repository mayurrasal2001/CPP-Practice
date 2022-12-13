#include<iostream>
using namespace std;
int main(){

    //this nested for loop will create the matrix of 3X3
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<" "<<i<<" "<<j;
            cout<<endl;
        }
    }
    return 0;
}