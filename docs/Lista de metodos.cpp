#include <iostream>
#include <math.h>
using namespace std;
int op;

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
// Función para calcular la potencia
double calcularPotencia(double base, int exponente) {
    return pow(base, exponente);
}
// Función para calcular la raíz cuarta
double calcularRaizCuarta(double numero) {
    return pow(numero, 0.25);
}

main(){
    do{
 // Lista de opciones
      cout<<"Obtener Factorial--> 1 "<<endl;
      cout<<"Obtener la Potencia--> 2 "<<endl;
      cout<<"Obtener la raiz cuarta--> 3 "<<endl;
      cout<<"Salir--> 4 "<<endl;
      cout<<"Seleccione una opcion: ";
      cin>>op;
 // Factorial
      if(op==1){
        int numero;
        cout<<"Ingrese un numero entero no negativo: ";
        cin>>numero;
        int resultado = calcularFactorial(numero);
        if (resultado == -1) {
            cout<<"Error: No se puede calcular el factorial de un numero negativo."<<endl;
        } else {
            cout<<"El factorial de "<<numero<< " es: "<<resultado<<endl;
        }
      }
 // Potencia
      if(op==2){
        double base;
        int exponente;
        cout<<"Ingrese la base: ";
        cin>>base;
        cout<<"Ingrese el exponente: ";
        cin>>exponente;
        double resultado = calcularPotencia(base, exponente);
        cout<<base<<" elevado a la "<<exponente<<" es: "<<resultado<<endl;
        break;
        }
 // Raiz cuarta
      if(op==3){
        double numero;
        cout<<"Ingrese un numero para calcular la raiz cuarta: ";
        cin>>numero;
        double resultado = calcularRaizCuarta(numero);
        cout<<"La raiz cuarta de "<<numero<<" es: "<<resultado<<endl;
        break;
        }
    
    }while(op!=4);
    return 0;
}   