/*
Realizar la diagonal de la matriz y verificar si son par y impar, luego mostrar resultado en pantalla.
Cuando i sea igual a j, se resuelve en diagonal
Matriz en multiplicación
*/
#include <iostream>
#include <math.h>
using namespace std;


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

int main() {
    // Ejemplo de matrices
    int matriz1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matriz2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int resultadoMultiplicacion[3][3];

    // Multiplicar matrices
    multiplicarMatrices(matriz1, matriz2, resultadoMultiplicacion);

    // Mostrar el resultado de la multiplicación
    cout << "Resultado de la multiplicación de matrices:" << endl;
    imprimirMatriz(resultadoMultiplicacion);

    // Calcular la diagonal y verificar la paridad
    cout << "Diagonal de la matriz y paridad:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (i == j) {
                cout << resultadoMultiplicacion[i][j] << " ";
                verificarParidad(resultadoMultiplicacion[i][j]);
            }
        }
    }

    return 0;
}
