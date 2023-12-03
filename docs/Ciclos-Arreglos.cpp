#include <iostream>
#include <string>
using namespace std;

	int p1[3], p2[3], p3[3];
	
int main(){
	for(int i=0; i<3; i++){
		cout<<"Dame el valor P1["<<i<<"]:";
		cin>>p1[i];
	}
	for(int i=0; i<3; i++){
		cout<<"Dame el valor P2["<<i<<"]:";
		cin>>p2[i];
	}
	for(int i=0; i<3; i++){
		p3[i]=p1[i]+p2[i];
	}
	for(int i=0; i<3; i++){
	cout<<p3[i];
	}
	return 0;
	
}

/*
Ciclos
for(inicio; condicion; inc/dec){
	Instrucciones
	{
Arreglos
	Tipo_de_datos; nombre_var[tamaño]*/