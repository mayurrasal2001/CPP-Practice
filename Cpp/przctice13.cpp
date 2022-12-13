#include<iostream>
using namespace std;
class Rectangle
{
     public:
	int length;
	int breadth;
     int setlength(int l)
     {
	length = l;
     }	
     int setbreadth(int b)
     {
	breadth = b;
     }

     int getLength()
     {
	return length;
     }

     int getbreadth()
     {
	return  breadth;
     }
	 
     int area()
     {
	return length * breadth;
     }

     int perimeter()
     {
	return 2 * (length + breadth);
     }

};

int main()
{     
      Rectangle r;
      Rectangle *p;
      p=&r;
      p->length=20;
      p->breadth=30;
      cout<<p->area()<<endl;
      cout<<p->perimeter()<<endl;
      return 0;
}
