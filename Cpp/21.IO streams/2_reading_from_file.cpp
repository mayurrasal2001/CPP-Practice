#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream mayur;
    mayur.open("my.txt");

    if(mayur)
    {
        cout<<"File is Opened"<<endl;
    }

    string name;
    int roll;
    string Branch;

    mayur>>name>>roll>>Branch;

    mayur.close();

    cout<<"Name: "<<name<<endl;
    cout<<"RollNo: "<<roll<<endl;
    cout<<"Branch: "<<Branch<<endl;

return 0;
}


// //2.method of cheking if file is opened or not
    // if(mayur.is_open())
    // {
    //     cout<<"File is opened"<<endl;
    // }
