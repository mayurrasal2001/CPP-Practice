#include<iostream>
#include<fstream>
using namespace std;
int main(){
    //ofstream mayur("my.txt",ios::app);        //By default it will be truncate
    ofstream mayur("my.txt",ios::trunc);
    // mayur<<"Ramesh"<<endl;
    // mayur<<4239<<endl;
    // mayur<<"ComputerEngineerring"<<endl;

    mayur<<"Ganesh"<<endl;
    mayur<<4239<<endl;
    mayur<<"ComputerEngineerring"<<endl;
    mayur.close();

    return 0;
}