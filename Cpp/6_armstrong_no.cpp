#include<iostream>
using namespace std;
int main(){
    int n,sum=0,m,r;
    cout<<"Enter the number: ";
    cin>>n;
    m=n;
    while(n>0)
    {
        r = n % 10;
        n = n / 10;
        sum = sum + r*r*r;
    }
    
    if(sum==m)
        cout<<"It is a Armstrong Number";
    else
        cout<<"Not a Armstrong number";
    return 0;
}