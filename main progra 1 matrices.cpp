#include <iostream>
#include <conio.h>

///una matriz es un vector sobre otro vector

using namespace std;
int main() {
	
	//variables
	int fila, columna;
	
	cout<<"ingrese cantidad filas: "<<endl;
	cin>>fila;
	cout<<"ingrese cantidad columnas: "<<endl;
	cin>>columna;
	
	int mat [fila][columna];
	
	for (int i=0;i<fila;i++){
		for (int j=0;j<columna;j++){
			cout<<"ingrese variables de posicion"<<i<<j<<" : ";
			cin>>mat[i][j];
		}
	}
	
	cout<<"\nImprimiendo Matriz\n";
	for (int h=0;h<fila;h++){
		for (int k=0;k<columna;k++){
			cout<<mat[h][k]<<" ";
		}
		cout<<"\n";
	}
	
	getch();
	return 0;
}
