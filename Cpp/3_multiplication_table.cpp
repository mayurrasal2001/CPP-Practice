#include<iostream>
using namespace std;
int main(){
    int i,x;
    cout<<"Enter the Number: ";
    cin>>x;

    for(i=1;i<=10;i++)
    { 
        cout<<x<<" X "<<i<<" = "<<i*x<<endl;
    }
return 0;
}