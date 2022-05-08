#include <iostream> 
using namespace std;

int main(){
	int Numeros[5][3], x;
	for(int i=0;i<5;i++){
		cout<<"Ingrese los numeros de la fila "<<i+1<<"."<<endl;
		for(int j=0;j<3;j++){
			cout<<"Ingrese un numero: ";
			cin>>Numeros[i][j]; 
		}
		cout<<endl;
	}
	cout<<endl;
	for(int i=0;i<5;i++){
		if((i+1)%2==0){
			cout<<"La suma de los numeros de la fila "<<i+1<<" es: ";
			for(int j=0;j<3;j++){
				x=x+Numeros[i][j]; 
			}
			cout<<x;
		}
		x=0;
		cout<<endl;
	}
	return 0;
}

