#include <iostream>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {
	
	int alumnos=5;
	int calificaciones=7;
	
	int notas [5][7];
    int suma[alumnos], promedio[calificaciones];


for(int i=0; i<alumnos; i++){
	
	cout<<"Ingrese las notas del estudiante numero "<<i+1<<endl;
	
	for(int j=0; j<calificaciones; j++){
		
		cin>>notas [i][j];
		
	}
}

for(int h=0; h<alumnos; h++){
	
	int total=0;
	
	for(int g=0; g<calificaciones; g++){
		
		total= notas [h][g]+total;
		
		
		cout<<total<<endl;
		
	}
	
	promedio[h]=total/7;
	
	total=0;
	
}

for(int l=0; l<alumnos; l++){
	
	cout<<"La nota del estudiante numero "<<l<<" es: "<<promedio[l]<<endl;
	
	if(promedio[l]==100){
		
		cout<<"Exelente!"<<endl;
		
	}
	
	if(99>=promedio[l] and promedio[l]>=90){
		
		cout<<"Muy bien"<<endl;
		
	}
	
		if(89>=promedio[l] and promedio[l]>=80){
		
		cout<<"Bien"<<endl;
		
	}
		if(79>=promedio[l] and promedio[l]>=70){
		
		cout<<"Hay que mejorar"<<endl;
		
	}
		if(promedio[l]<=69){
		
		cout<<"Reprobado"<<endl;
		
	}
	
}

}
