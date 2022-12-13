#include<iostream>
using namespace std;

class rectangle{
    private:
        int length;
        int breadth;

    public:
        rectangle();
        rectangle(int l,int b);
        rectangle(rectangle &r1);
        void setlength(int l);
        void setBreadth(int b);
        int getLength();
        int getBreadth();
        int area();
        int perimeter();
};

int main(){
    rectangle r1(10,11);
    rectangle r2(r1);
    cout<<" "<<r2.area()<<endl;
    cout<<""<<r1.getLength()<<endl;
    cout<<""<<r2.getBreadth()<<endl;
    cout<<""<<r2.perimeter()<<endl;
    cout<<""<<r1.perimeter()<<endl;
    return 0;
}   
    //it is good practice that function always write outside the class only 
    //member function call define outside the class using the score resolution operator(::)
    rectangle :: rectangle()
    {
        length=1;
        breadth=1;
    }

    rectangle :: rectangle(int l,int b)
    {
        setlength(l);
        setBreadth(b);
    }


    rectangle :: rectangle(rectangle &r1)
    {
        length=r1.length;
        breadth=r1.breadth;
    }


    void rectangle :: setlength(int l)
    {   if(l<0)
            length=1;
        else
            length=l;
    }

    void rectangle :: setBreadth(int b)
    {
        if(b < 0)
            breadth=1;
        else
            breadth=b;
    }


    int rectangle :: getLength()
    {
        return length;
    }

    int rectangle :: getBreadth()
    {
        return breadth;
    }

    int rectangle :: area()
    {
        return length * breadth;
    }

    int rectangle :: perimeter()
    {
        return 2 *(length + breadth);
    }
