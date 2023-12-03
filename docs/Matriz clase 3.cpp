#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    // Generar números aleatorios
    srand(time(0));

    // Declarar matrices A, B y C
    int A[10][10], B[10][10], C[10][10], r=10, c=10;

    // Rellenar las matrices A y B con valores aleatorios
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            A[i][j] = rand() % 100; // Valores entre 0 y 99
            B[i][j] = rand() % 100; // Valores entre 0 y 99
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

    return 0;
}