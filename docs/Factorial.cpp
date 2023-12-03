#include <iostream>
using namespace std;

//Calcular el factorial
int calcularFactorial(int n) {
    if (n < 0) {
        return -1;  //Indicar un error
    }

    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
}

int main() {
    int numero;
    cout<<"Ingrese un numero entero no negativo: ";
    cin>>numero;

    int resultado = calcularFactorial(numero);

    if (resultado == -1) {
        cout<<"Error: No se puede calcular el factorial de un número negativo."<<endl;
    } else {
        cout<<"El factorial de "<<numero<< " es: "<<resultado<<endl;
    }

    return 0;
}
