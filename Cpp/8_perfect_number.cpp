#include<iostream>
using namespace std;
int main(){

    int i,n,sum=0;
    cout<<"Enter the Number: ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        if(n % i == 0)
        {
            sum=sum + i;
        }
    }

    cout<<"Sum of the factors of the number is: "<<sum<<endl;
    if(2*n == sum)
        cout<<"Number is perfect number";
    else
        cout<<"Number is not perfect number";
    return 0;
}