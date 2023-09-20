#include <iostream>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

//declara estructura
struct persona{
   char nombre[20];
   int edad;
   double altura;
   char tez[20];
   char nacionalidad[20];
   char genero[20];

	
} persona[1];

int main(){

	//solicitar datos
	for(int i=0;i<2;i++){
		cout<<"ingrese nombres: ";
		cin.getline(persona[i].nombre,20,'\n');
		cout<<"ingrese edad: ";
		cin>>persona[i].edad;
		cout<<"ingrese altura: ";
		cin>>persona[i].altura;
		cin.ignore();
		cout<<"ingrese tez: ";
		cin.getline(persona[i].tez,20,'\n');
		cout<<"ingrese nacionalidad: ";
		cin.getline(persona[i].nacionalidad,20,'\n');
		cout<<"ingrese genero: ";
		cin.getline(persona[i].genero,20,'\n');
	}
	
	//imprimir valores
	cout<<"\nDatos personales \n";
	for (int j=0;j<2;j++){
		cout<<"\nNombre: "<<persona[j].nombre;
		cout<<"\nEdad: "<<persona[j].edad;
		cout<<"\nAltura: "<<persona[j].altura;
		cout<<"\nTez: "<<persona[j].tez;
		cout<<"\nNacionalidad: "<<persona[j].nacionalidad;
		cout<<"\nGenero: "<<persona[j].genero;

	}
	
	getch ();
	return 0;
}
