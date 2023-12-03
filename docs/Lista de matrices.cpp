#include <iostream>
#include <math.h>
using namespace  std;
int op;
int A[3][3], B[3][3], C[3][3];

//Programa que contenga la suma y multiplicación de matrices, en modo de selección.
main(){
do{
    cout<<"Programa determinado para suma y multiplicacion de matrices"<<endl;
    cout<<"1.-Suma de matrices"<<endl;
    cout<<"2.-Multiplicacion de matrices"<<endl;
    cout<<"3.-Salir"<<endl;
    cout<<"Seleccione una opcion-->"<<endl;
    switch(op){
    case 1{
        //Leer la matriz A
        for(int r=0; r<3; r++)
        for(int c=0; c<3; c++){
        cout<<"A["<<r<<"]["<<c<<"]-->";
        cin>>A[r][c];
    }
        //Leer la matriz B
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
    case 2{
        //Leer la matriz A
    cout<<"Ingrese los elementos de la matriz A:"<<endl;
    for(int r=0; r<3; r++)
        for(int c=0; c<3; c++){
        cout<<"A["<<r<<"]["<<c<<"]-->";
        cin>>A[r][c];
    }
        //Leer la matriz B
    cout<<"Ingrese los elementos de la matriz B: "<<endl;
    for(int r=0; r<3; r++)
        for(int c=0; c<3; c++){
        cout<<"B["<<r<<"]["<<c<<"]-->";
        cin>>B[r][c];
    }
        // Algoritmo para la multiplicación de matrices A*B
    cout<<"El resultado de la multiplicación A*B es: "<<endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            C[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
        // Mostrar la matriz resultante C
    cout << "El resultado de la multiplicación A*B es: "<<endl;
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            cout<<C[r][c]<<" ";
        }
        cout<<endl;
    }
    }
    default:
    cout<<"Opción no válida. Intente de nuevo."<<endl;
}while(op!=3);
return 0;
}