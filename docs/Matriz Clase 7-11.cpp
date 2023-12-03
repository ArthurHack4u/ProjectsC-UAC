#include <iostream>
#include <math.h>
using namespace std;

int A[3][3], B[3][3], C[3][3];

main(){
    for(int r=0; r<3; r++)
        for(int c=0; c<3; c++){
        cout<<"A["<<r<<"]["<<c<<"]-->";
        cin>>A[r][c];
    }
    for(int r=0; r<3; r++)
        for(int c=0; c<3; c++){
        cout<<"B["<<r<<"]["<<c<<"]-->";
        cin>>B[r][c];
    }
    //Algoritmo para la SUMA de la matriz A+B
    for(int r=0; r<3; r++)
        for(int c=0; c<3; c++){
            C[r][c]=A[r][c]+B[r][c];
        }
    for(int r=0; r<3; r++)
    {    
        for(int c=0; c<3; c++)
        {
            cout<<C[r][c]<<" ";
        }
        cout<<endl;
    }    
}