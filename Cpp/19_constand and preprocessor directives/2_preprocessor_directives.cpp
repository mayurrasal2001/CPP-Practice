#include <iostream>
using namespace std;

#define PI 3.1425;
#define max(x,y) (x>y?x:y);  //it returns if x is greater than y then it will take x otherwise take y
#define msg(x) #x;            //it will convert our input into the string

int main()
{
    int x=10;
    cout<<PI; 
    cout<<endl;

    cout<<max(10,20);
    cout<<endl;

    cout<<msg(Hello);
    cout<<endl;


    return 0;
}