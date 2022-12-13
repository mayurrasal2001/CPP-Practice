#include<iostream>
using namespace std;

class car 
{
    public:
        virtual void start()=0;                    //PURE VIRTUAL FUNCTION(ASSIGN TO ZERO BECAUSE WE NEVER CREATE THE OBJECT OF IT SO ITS BODY PART IS WASTE OF MEMORY WE JUST INHERITS THE FUNCTION)
        // {
        //     //cout<<"Car is start"<<endl;
        // }

        virtual void stop()=0;
        // {
        //     //cout<<"Car is stopped"<<endl;
        // }
};

class innova:public car 
{
    public:
        void start()
        {
            cout<<"innova is start"<<endl;
        }

        void stop()
        {
            cout<<"innova is stopped"<<endl;
            cout<<endl;
        }
};

class swift:public car
{
    public:
        void start()
        {
            cout<<"swift is start"<<endl;
        }

        void stop()
        {
            cout<<"swift is stopped"<<endl;
        }
};

int main(){
    innova i;
    swift s;

    car *p= &i;    ////pointer of class car which are assigns to the innova object
    p->start();
    p->stop(); 
    
    p = &s;        //pointer of class car which are assigns to the swift object
    p->start();
    p->stop(); 
    return 0;
}
