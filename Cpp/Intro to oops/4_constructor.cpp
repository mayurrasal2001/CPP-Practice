#include<iostream>
using namespace std;

class rectangle{
    private:
        int length;
        int breadth;

    public:
    /*this are some overloadded constructor below 2 are the same contructor because of the we pass the
      default parameters as l=1 and b=1 hence it will in the absence of non-parametrised it will takes the value
        and act as non-parametrised contructor hence avoid the writing multiple overloaded construcrtor*/ 
    rectangle()
    {
        cout<<"Default contructor called"<<endl;
        length=1;
        breadth=1;
    }

    rectangle(int l=1,int b=1)
    {
        setlength(l);
        setBreadth(b);
    }


    rectangle(rectangle &r1)
    {
        length=r1.length;
        breadth=r1.breadth;
        cout<<"Copy contructor is called";
    }


    int setlength(int l)
    {   if(l<0)
            length=1;
        else
            length=l;
    }

    int setBreadth(int b)
    {
        if(b < 0)
            breadth=1;
        else
            breadth=b;
    }


    int getLength()
    {
        return length;
    }

    int getBreadth()
    {
        return breadth;
    }

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
    // rectangle r;
    rectangle r1(10,11);
    rectangle r2(r1);
    cout<<" "<<r2.area()<<endl;
    return 0;
} 
