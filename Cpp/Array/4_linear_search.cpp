#include<iostream>
using namespace std;
int main(){
    int A[5]={25,47,69,78,23};
    int i,n=5;
    int key;

    cout<<"Enter the Key ";
    cin>>key;

    for(i=0;i<n;i++)
    {
        if(key==A[i])
        {
            cout<<"Search is Successful & key is found at index "<<i;
            exit(0);
        }
    }

    

    cout<<"Key is Not found";
    return 0;
}