#include<iostream>
using namespace std;
int main(){
    int i,key,mid;
    int A[6]={18,19,22,23,24,26};
    int l=0,h=5;
    
    cout<<"Enter the key ";
    cin>>key;
    while(l<=h)
    {
        mid=(h+l)/2;
        if(key==A[mid])
        {
            cout<<"Key is found at "<<mid;
            return 0;
        }
        else if(key<A[mid])
                h=mid-1;
        else
            l=mid+1;
    }
    cout<<"Key is Not found";
    return 0;
}

