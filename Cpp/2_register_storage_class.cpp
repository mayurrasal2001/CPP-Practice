#include<iostream>
using namespace std;

int x=13;                     
int main(){

    register int x=10;
    {
        auto x=20;
        cout<<x<<" "<<endl;
    }
    cout<<x<<" ";                    

    return 0;
}