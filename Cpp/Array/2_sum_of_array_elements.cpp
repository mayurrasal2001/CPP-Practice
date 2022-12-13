#include<iostream>
using namespace std;
int main(){

    int n,i,sum=0;
    int A[]={1,2,3,4,5,6,7,8,9};
    n=9;

    for(i=0;i<n;i++)
    {
        sum=sum+A[i];
    }

    cout<<sum<<" ";
    return 0;
}