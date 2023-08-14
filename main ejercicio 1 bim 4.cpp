#include <iostream>
#include <conio.h>

///hacer un prgrama que lea 5 numeros en un arreglo los copie a otro arreglo multiplicados por 2 y muestre el segundo arreglo

using namespace std;
int main() {
	
	float numeros [5];
	float numeros2 [5];
	
	for (int i=0; i<5; i++){
		cout<<"ingrese numero"<<i + 1<<" : ";
		cin>>numeros [i];
		numeros2 [i]= numeros[i] * 2;
	}
	
	cout<<"arreglo nuevo: ";
	for (int j=0; j<5; j++){
		cout<< numeros2 [j] << "  ";
	}
	
	getch();
	return 0;
}
