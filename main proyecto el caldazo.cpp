#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;
int numempleado;
int a;
char buscarnombre[20];
float aux;
string dato;
char band = 'F';
int main() {
	
	cout<<"Número de empleados de la empresa."<<endl;
	cin>>numempleado;
	
	struct datos{
	
	char nombre[20];
	int identificacion;
	float sueldo;
	
}persona[numempleado];

	cout<<"Datos de los empleados."<<endl;
	for(int i=0; i<numempleado; i++){
		
	cin.ignore();	
	cout<<"Nombre del empleado "<<i+1<<endl;	
	cin.getline(persona[i].nombre,20,'\n');	
	
	cout<<"Identificación del empleado "<<i+1<<endl;
	cin>>persona[i].identificacion;
	
	cout<<"Salario del empleado "<<i+1<<endl;
	cin>>persona[i].sueldo;
	}
	
	
	while(a!=4){
	cout<<"¿Qué acción le gustaría hacer ahora?"<<endl;
	cout<<"1. Encontrar el empleado con el salario más alto."<<endl;
	cout<<"2. Encontrar el empleado con el salario más bajo."<<endl;
	cout<<"3. Buscar si un empleado esta por nombre."<<endl;
	cout<<"4. SALIR"<<endl;
	cin>>a;
		
	switch(a){
	case 1: 
	for(int i=0; i<1; i++){
		
	if(persona[i].sueldo > persona[i+1].sueldo){
	aux = persona[i].sueldo;
	persona[i].sueldo = persona[i+1].sueldo;	
	persona[i].sueldo = aux;
	cout<<"El empleado con el salario más alto es "<<i+1<<", de nombre "<<persona[i].nombre<<endl;
	}	
	}
	; break;
	case 2:
	for(int i=0; i<1; i++){
		
	if(persona[i].sueldo > persona[i+1].sueldo){
	aux = persona[i].sueldo;
	persona[i].sueldo = persona[i+1].sueldo;	
	persona[i+1].sueldo = aux;
	}
	cout<<"El empleado con el salario más bajo es "<<i+2<<", de nombre "<<persona[i+1].nombre<<endl;	
	}	
	; break;
	case 3:	
	cout<<"Nombre del empleado."<<endl;
	cin>>dato;
	
	int j;
	while((band == 'F')&&(j<numempleado)){
		
		if(persona[j].nombre == dato){
			
		band = 'V';	
		
		}		
	j++;	
	}
	
	if(band == 'F'){
	cout<<"No está en la lista."<<endl;
	}
	else{
	cout<<"Datos personales:"<<endl;
	for(int j=0; j<1; j++){
	cout<<"Nombre: "<<persona[j].nombre<<endl;
	cout<<"Identificación: "<<persona[j].identificacion<<endl;
	cout<<"Sueldo: "<<persona[j].sueldo<<endl;
			
	}
	}
	; break;		
	
	case 4:
	cout<<"Salio del programa."<<endl;
	; break;	
	
	default: cout<<"La no es válida."<<endl; break;	
}
}
}
