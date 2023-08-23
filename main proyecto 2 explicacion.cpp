#include <iostream>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	
	//para almacenar filas y columnas
	int columna, fila;
	
	cout<<"ingrese cantidad de columnas: ";
	cin>> columna;
	cout<<"cantidad de filas: ";
	cin>>fila;
	
	int matriz[columna][fila];
	
	//solicitar datos
	for (int i=0;i<columna;i++){
		for (int j=0;j<fila;j++){
			cout<<"ingrese un numero para almacenar en la posicion: "<<i+1<<" "<<j+1<<" : ";
			cin>>matriz[i][j];
		}
	}
	
	//suma de columnas
	int maxsuma= 0, columnamaxima=0;
	for (int k=0;k<columna;k++){
		int sumacolumna=0;
		for (int l=0;l<fila;l++){
		  sumacolumna=sumacolumna + matriz[l][k];
		}
		if(sumacolumna>maxsuma){
			maxsuma=sumacolumna;
			columnamaxima = k;
		}
		
	}
	
	//imprimir
	cout<<"\nImprimiendo matriz...\n";
	for(int i=0;i<columna;i++){
		for (int j=0;j<fila;j++){
			cout<< matriz[i][j]<<" ";
		}
		cout<<"\n"; //salida linea de filas
	}
	
	cout<<"la columna" <<columnamaxima+1<<"tiene una suma de: "<<maxsuma;

	getch();
	return 0;
}
