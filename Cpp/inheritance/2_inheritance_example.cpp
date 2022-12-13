#include<iostream>
using namespace std;
class Rectangle
{
    private:
        int length;
        int breadth;
    
    public:
        Rectangle();                         //after comments error occur
        Rectangle(int l,int b);
        int getLength(){return length;}   //here return length and breadth will done but how they will return
        int getBreadth(){return breadth;}
        void setLength(int l);
        void setBreadth(int b);
        int area();
};

class cuboid:public Rectangle
{
    private:
        int height;

    public:
    cuboid(int h)
    {
        height = h;
    }

    int getheight()
    {
        return height;
    }
    void setHeight(int h)
    {
        height = h;
    }
    int volume()
    {
        return getLength() * getBreadth() * height;
    }
};

int main(){
    cuboid c(10);
    c.setLength(5);
    c.setBreadth(4);
    cout<<"Volume is "<<c.volume()<<endl;
    cout<<"Area is "<<c.area()<<endl;
}

Rectangle :: Rectangle()
{
    length = 1;
    breadth = 1;
}

Rectangle :: Rectangle(int l,int b)
{
    length = l;
    breadth = b;
}

void Rectangle :: setLength(int l)
{
    length = l;
}

void Rectangle :: setBreadth(int b)
{
    breadth = b;
}

int Rectangle :: area()
{
    return length * breadth;
}
