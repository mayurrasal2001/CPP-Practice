#include<iostream>
using namespace std;
int main(){
    // //int A[3][4];            //Declaration     
    // //int A[2][3]=14;             //initialisation
    int A[2][3]={{2,4,6},{45,67,89}};   //initialisation

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<" "<<A[i][j];
        }
        cout<<endl;
    }


    // //Code No 2-------->Addition of 2 Matrix
    // int A[2][3]={{2,4,5},{45,65,21}};
    // int B[2][3]={{23,56,2},{21,24,27}};
    // int C[2][3];

    // for(int i=0;i<2;i++)
    // {
    //     for(int j=0;j<3;j++)
    //     {
    //         C[i][j]=A[i][j]+B[i][j];
    //     }
    // }

    // //Display
    // for(int i=0;i<2;i++)
    // {
    //     for(int j=0;j<3;j++)
    //     {
    //         cout<<" "<<C[i][j];
    //     }
    //     cout<<endl;
    // }

    return 0;
}



