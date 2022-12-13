#include<iostream>
using namespace std;
int main(){
    int n,m,r,rev=0;

    cout<<"Enter the number: ";
    cin>>n;
    m=n;
    while(n>0)
    {
        r = n % 10;
        n = n / 10;
        rev = rev * 10 + r;
    }

    if(rev==m)
        cout<<"Number is palindrome";
    else    
        cout<<"Number is not palindrome";
return 0;
}