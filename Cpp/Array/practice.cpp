#include<iostream>
using namespace std;
int main(){
    int A[]={14,25,45,78,1,25,36};
    int n = 6;

    int sum =0;

    for(int i=0;i<=n;i++)
    {
        sum = sum+A[i];
    }

    cout<<"Sum of the array elements is "<<sum<<endl;
return 0;
}