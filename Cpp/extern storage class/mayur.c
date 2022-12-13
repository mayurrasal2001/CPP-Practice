#include<stdio.h>
void fun1();
void fun2();

void main(){
    extern int x;
    printf("%d\n",x);
    fun1();
    fun2();
}
    void fun1()
    {
        int x=10;
        printf("%d\n",x);
    }

    void fun2()
    {
        int y=34;
        printf("%d\n",y);
    }

    int x=58;

