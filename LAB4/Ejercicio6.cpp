#include <iostream> 
using namespace std;

int main(){
	int Numeros[3][3],x=0,mayor=0;
	for(int i=0;i<3;i++){
		cout<<"Ingrese los numeros de la fila "<<i+1<<"."<<endl;
		for(int j=0;j<3;j++){
			cout<<"Ingrese un numero: ";
			cin>>Numeros[i][j]; 
		}
		cout<<endl;
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			x=x+Numeros[i][j]; 
		}
		if(x>mayor){
			mayor=x;
		}
		if(i==0 or i==1){
			x=0;
		}
		else{
		}
	}
	cout<<"La suma de de los numeros de la fila mayor es "<<x;
	return 0;
}
