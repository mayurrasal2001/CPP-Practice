#include<iostream>
using namespace std;
int main(){
    int i,n,max;
    int A[7]={3,5,64,23,55,87,54};
    n=7;
    max=A[0];
    
    for(i=0;i<=n;i++)
    {
        if(A[i]>max)
            max=A[i];
    }

    cout<<"MAximum number is: "<<max<<endl;
    return 0;
}