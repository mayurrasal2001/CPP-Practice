#include<iostream>
using namespace std;

class rectangle{
    public:
        int length;
        int breadth;

        int area()
        {
            return length * breadth;
        }

        int perimeter()
        {
            return 2 *(length + breadth);
        }
};

//we can create the multitple object from the single class 
int main(){
    rectangle r1,r2;
    r1.length=10;
    r1.breadth=30;
    cout<<""<<r1.area()<<endl;
    cout<<""<<r1.perimeter()<<endl;

    r2.length=40;
    r2.breadth=20;
    cout<<""<<r2.area()<<endl;
    cout<<""<<r2.perimeter()<<endl;
    return 0;
}