#include<iostream>
using namespace std;

class mayur{
    public:
        int i;
        int x;
        int y;
        int sum=1;

    void product()
    {
        cout<<"Enter the Number: "<<endl;
        cin>>x;

        cout<<"Enter the Number: "<<endl;
        cin>>y;

        for(i=1; i<=y;i++)
        {
            sum = sum * x;
        }

        cout<<"Product of the "<<x<<" and "<<y<<" is "<<sum<<endl;
    }
};

int main(){
    mayur m1;
    m1.product();

    return 0;
}