#include<iostream>
using namespace std;

class rectangle{
    private:
        int length;
        int breadth;

    public:
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
    rectangle r1;
    r1.setlength(10);
    r1.setBreadth(20);

    cout<<" "<<r1.area()<<endl;
    cout<<" "<<r1.getLength()<<endl;

    return 0;
} 

/*Private data members can aseess only inside the class and their member function it cannot be aceess otside the class by their object or anyone
we acess that data members using the passing the arguments from the main and and at upper side through the setLenth function theere we can assign the 
 values to the private data members length and breadth and through the funtion getLength we can return the Length and breadth values to the main() function
 directly we cannot acess the data members using the class obj*/