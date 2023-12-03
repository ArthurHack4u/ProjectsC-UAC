/*2) Calcular dado un angulo con respecto al eje adyacente en x, una hipotenusa
en el plano xy con valor de 30, y un valor en el eje z introducido por el usuario.
Que valor tiene la magnitud del vector formado xyz con respecto al origen.
*/

#include <iostream>
#include <cmath>
using namespace std;

float angulo, hipotenusa=30, z, res, y;
int main(){
	cout<<"Dame el angulo en grados: ";
	cin>>angulo;
	
	cout<<"Dame el valor del eje z: ";
	cin>>z;
	
 	y= angulo*cos(M_PI/180);

	res= sqrt(pow(hipotenusa,2)+pow(z,2)+pow(y,2));	
	cout<<"La magnitud x, y, z es: "<<res;
	return 0;
}