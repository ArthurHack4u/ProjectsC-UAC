#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>
#include <string.h>
using namespace std;
int op;

// Declarar las matrices globales de orden de 10X10 con tipo de datos flotantes
float A[10][10], B[10][10], C[10][10], r=10, c=10;

//METODO
// Función para obtener el tamaño de una cadena
int obtenerLongitudCadena(const string & cadena) {
    return cadena.length();
}

main(){
    do{
    // Lista de opciones
      cout<<"Obtener longitud de una cadena--> 1 "<<endl;
      cout<<"Obtener suma de matrices y matriz diagonal--> 2 "<<endl;
      cout<<"Salir--> 3 "<<endl;
      cout<<"Seleccione una opcion: ";
      cin>>op;
      cin.ignore();

      //Opcion 1
      if(op==1){
        // Variable para almacenar la cadena del usuario
        string cadena;
        
        // Solicita la cadena a analizar
        cout<<"Inserta la cadena: "<<endl;
        getline(cin, cadena);
        
        // Función para obtener el tamaño de la cadena
        int longitudCadena = obtenerLongitudCadena(cadena);
        
        // Solicitamos la cadena
        cout<<"La cadena ingresada tiene una longitud de: " <<longitudCadena<<endl;
        }
        //Opcion 2
        if(op==2){
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
            // Calcular la diagonal
            cout << "Diagonal de la matriz:" << endl;
            for (int i = 0; i < 10; ++i) {
                for (int j = 0; j < 10; ++j) {
                    if (i == j) {
                        cout << C[i][j] << " "<<endl;
                        }
                }
            }
        }
      }while(op!=3);
}