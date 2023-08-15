#include <iostream>
#include <conio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

	
	int matriz[3][3];
	
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			cout<<"ingrese variables de posicion"<<i+1<<j+1<<" : ";
			cin>>matriz[i][j];
		}
	}
	
	cout<<"\nImprimiendo Matriz\n";
	for (int h=0;h<3;h++){
		for (int k=0;k<3;k++){
			cout<<matriz[h][k]<<" ";
		}
		cout<<"\n";
	}
	
	for(int m=0;m<3;m++){
		cout<<matriz[m][m]<<" ";
	}
	
	
	getch();
	return 0;
}
