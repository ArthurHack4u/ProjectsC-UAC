#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int op;
int A[3][3], B[3][3], C[3][3];

int main() {
    do {
        cout<<"Programa para operaciones con matrices"<<endl;
        cout<<"1.- Suma de matrices"<<endl;
        cout<<"2.- Multiplicacion de matrices"<<endl;
        cout<<"3.- Multiplicacion con resultado en diagonal(par,impar)"<<endl;
        cout<<"4.- Salir"<<endl;
        cout<<"Selecciona una opcion: "<<endl;
        cin>>op;

        if (op==1) {
            cout<<"Ingresa los elementos de la matriz A:"<<endl;
            for (int i = 0; i < 3; i++)
                for (int j = 0; j < 3; j++) {
                    cout<<"A[" << i << "][" << j << "]-->";
                    cin>>A[i][j];
                }
            cout<<"Ingresa los elementos de la matriz B: "<<endl;
            for (int i = 0; i < 3; i++)
                for (int j = 0; j < 3; j++) {
                    cout<<"B[" << i << "][" << j << "]-->";
                    cin>>B[i][j];
                }
            for (int i = 0; i < 3; i++)
                for (int j = 0; j < 3; j++) {
                    C[i][j] = A[i][j] + B[i][j];
                }
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    cout<<C[i][j] << " ";
                }
                cout<<endl;
            }
        }
        if (op==2) {
            cout<<"Ingresa los elementos de la matriz A:"<<endl;
            for (int i = 0; i < 3; i++)
                for (int j = 0; j < 3; j++) {
                    cout<<"A[" << i << "][" << j << "]-->";
                    cin>>A[i][j];
                }
            cout<<"Ingresa los elementos de la matriz B: "<<endl;
            for (int i = 0; i < 3; i++)
                for (int j = 0; j < 3; j++) {
                    cout << "B[" << i << "][" << j << "]-->";
                    cin >> B[i][j];
                }
            cout<<"El resultado de la multiplicacion A*B es: "<<endl;
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    C[i][j] = 0;
                    for (int k = 0; k < 3; k++) {
                        C[i][j] += A[i][k] * B[k][j];
                    }
                }
            }
            cout<<"El resultado de la multiplicacion A*B es: "<<endl;
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    cout<<C[i][j]<< " ";
                }
                cout<<endl;
            }
        }
    }while (op!= 4);
}




// Función para multiplicar matrices
void multiplicarMatrices(int matriz1[3][3], int matriz2[3][3], int resultado[3][3]) {
    // Inicializar la matriz resultante con ceros
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            resultado[i][j] = 0;
        }
    }

    // Realizar la multiplicación de matrices
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 3; ++k) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
}

// Función para imprimir una matriz
void imprimirMatriz(int matriz[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

// Función para verificar la paridad de un número
void verificarParidad(int numero) {
    if (numero % 2 == 0) {
        cout << numero << " es par." << endl;
    } else {
        cout << numero << " es impar." << endl;
    }
}