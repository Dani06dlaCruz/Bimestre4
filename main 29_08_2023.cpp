#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

char palabra[20];
int longitud;

int main() {
	
	cout<<"Ingresa una palabra."<<endl;
	cin.getline(palabra, 20, '\n');
	
	longitud=strlen(palabra);

	
	if(longitud>=10){
	cout<<"Los carácteres totales de la cadena ingresada son "<<longitud<<", la palabra es:"<<endl;	
	cout<<palabra<<endl;	
	}
	else{
	cout<<"Los carácteres totales de la cadena son: "<<longitud<<endl;		
	cout<<"La palabra no ha llegado al mínimo de 10 carácteres, por ende, no se mostrará."<<endl;	
	}
	
}
