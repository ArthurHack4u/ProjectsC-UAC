#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>
using namespace std;

float A[10][10], B[10][10], C[10][10], r=10, c=10;

main(){
     // Generar números aleatorios
    srand(time(0));

    // Rellenar las matrices A, B y C con valores aleatorios
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            A[i][j] = rand() % 100; // Valores entre 0 y 99
            B[i][j] = rand() % 100; // Valores entre 0 y 99
            C[i][j] = A[i][j]+ B[i][j];
        }
    }
    
    // Realizar la suma de las matrices A y B y guardar el resultado en C
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Mostrar la matriz A
    cout << "Matriz A:" << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }

    // Mostrar la matriz B
    cout << "Matriz B:" << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << B[i][j] << "\t";
        }
        cout << endl;
    }

    // Mostrar la matriz C (suma)
    cout << "Matriz C (A + B):" << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << C[i][j] << "\t";
        }
        cout << endl;
    }

    
    // Calcular la diagonal y verificar la paridad
    cout << "Diagonal de la matriz:" << endl;
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            if (i == j) {
                cout << C[i][j] << " "<<endl;
            }
        }
    }

    return 0;
}

