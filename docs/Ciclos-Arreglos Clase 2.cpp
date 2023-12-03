/*
Arreglos
Tipo_datos mombre_variable[tamaño];

float x[3]
Asignación
x[0]=2.5;
x[0]=4.2;
x[0]=6.4;

for(int i=0; i<3; i++){
	cout<<"Dame el valor x["<<i<<]:";
	cin>>x[i];
------------------------------------------------------------------
1) Calcular la suma de dos puntos tridimensionales dados por el usuario
usando arreglos y calcular la distancia al origen.
*/

#include <iostream>
#include <cmath>
using namespace std;

float p1[3], p2[3], res[3], D=0;

int main(){
	//cilo-arreglo
	for(int i=0; i<3; i++){
		cout<<"Dame p1 ["<<i<<"]:";
		cin>>p1[i];	
	}
	for(int i=0; i<3; i++){
		cout<<"Dame p2 ["<<i<<"]:";
		cin>>p2[i];
	}
	//suma de posiciones del arreglo
	for(int i=0; i<3; i++){
		res[i]=p1[i] + p2[i];
	}
	//obtención del resultado final de la distancia elevando al cuadrado usando "pow"
	D=sqrt(pow(res[0],2)+pow(res[1],2)+pow(res[2],2));
	cout<<D;
}