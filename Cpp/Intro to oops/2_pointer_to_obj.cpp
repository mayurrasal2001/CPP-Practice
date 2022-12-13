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

int main(){
    rectangle r1;
    rectangle *p;
    p = &r1;                            //pointer to object
    r1.length=30;
    r1.breadth=30;
    cout<<""<<r1.area()<<endl;
    cout<<""<<r1.perimeter()<<endl;

    p->length=20;
    p->breadth=30;
    cout<<p->area()<<endl;
    cout<<p->perimeter()<<endl;
}