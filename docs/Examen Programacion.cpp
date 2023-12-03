#include <iostream>
#include <string>
using namespace std;

// Función para obtener el tamaño de una cadena
int obtenerLongitudCadena(const string & cadena) {
    return cadena.length();
}


int main() {
    // Variable para almacenar la cadena del usuario
    string cadena;

    // Solicita la cadena a analizar
    cout<<"Inserta la cadena: "<<endl;
    getline(cin, cadena);

    // Función para obtener el tamaño de la cadena
    int longitudCadena = obtenerLongitudCadena(cadena);

    // Solicitamos la cadena
    cout<<"La cadena ingresada tiene una longitud de: " <<longitudCadena<<endl;
    return 0;
}
