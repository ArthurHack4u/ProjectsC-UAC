#include <iostream>
#include <string>
#include <math.h>
using namespace std;

/*
Metodos
    Void
    Ejemplos:
    Void suma();
    Void suma(int a, int b);
    int suma(int a, int b);
*/
int sum(int a, int b);
int sumar;
void suma(int a, int b);
main(){
    suma(2,3);
    cout<<sumar<<endl;
    sum(2,3);
    cout<<sum(2,3)<<endl;
}

void suma(int a, int b){
    sumar= a+b;
}
int sum(int a, int b){
    int x= a+b;
    return x;
}

/*
UML
Persona
int edad;
string nombre;
-----------------------------
void setnobre(string nombre);
string get_nombre();
*/