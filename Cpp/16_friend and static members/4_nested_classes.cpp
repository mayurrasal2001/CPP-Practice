#include<iostream>
using namespace std;

class outer
{
    public:
        void fun1() 
        {
            //i.fun2();
        }
    class inner
    {
        public:
        void fun2()
        {
            cout<<"This is the inner class"<<endl;
        }
    };
    //inner i;
};

int main(){
    outer::inner i;        //by using the scope resolution operator you can aceess the innerr class with help of the outer class
    i.fun2();

    return 0;
}