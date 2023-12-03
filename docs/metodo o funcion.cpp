/*

METODO O FUNCIÓN
Tipo_de_datos nombre  retornar valores

*/

#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int suma(int a, int b);
int resta(int a, int b);
string sumar_cadena(string a, string b);
void introducir_datos();
void introducir_cadenas();
int v1, v2;
string c1, c2;
float funcion(int i, int f);
main(){
    /*
    cout<<"Dame el primer valor: ";
    cin>>v1;
    cout<<"Dame el segundo valor: ";
    cin>>v2;
    cout<<"El resultado es: "<<suma(v1, v2)<<endl;
    cout<<"El resultado es: "<<resta(v1, v2)<<endl;
    
    cout<<"Dame la primera cadena: ";
    cin>>c1;
    cout<<"Dame la segunda cadena: ";
    cin>>c2;
    cout<<"La suma de cadenas es: "<<suma_cadena(c1, c2)<<endl;
    */
   cout<<"Dame el inicio del intervalo--> ";
   cin>>v1;
   cout<<"Dame el final del intervalo--> ";
   cin>>v2;
   cout<<"El resultado del intervalo--> "<<funcion(v1,v2)<<endl;
}

float funcion(int i, int f){
    float resultado = 0;
    for(int iterar=i; iterar<=f; iterar++){
        resultado = resultado + 2*pow(iterar,2);
    }
    return resultado;
}

int suma(int a, int b){
    int sumar;
    sumar = a + b;
    return sumar;
}
int resta(int a, int b){
    int restar;
    restar = a - b;
    return restar;
}
string suma_cadena(string a, string b){
    string sumar_cadena;
    sumar_cadena = a + b;
    return sumar_cadena;
}
/*
float area_triangulo(float b, float a){
    float at;
    at=b*a/2;
    return at;
}
*/
//busquen un metodo para calcular el factorial de un numero, metodo que devuelva el factorial
// for(int i=n; i>0; i--)
//     fac*=fact*i;