#include<iostream>
using namespace std;

class Mayur{

    public:

        void func1()
        {
            int n;
            cout<<"Enter the Number: "<<endl;
            cin>>n;

            while(n>=1)
            {
                cout<<n<<endl;
                n--;
            }
        }
        
};


int main(){
    Mayur m1;
    m1.func1();
    
    return 0;
}