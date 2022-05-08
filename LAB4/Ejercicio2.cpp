#include <iostream> 
using namespace std;

void busqueda(int x[]){
	int y;
	cout<<"Ingrese un numero a buscar: ";
	cin>>y;
	for(int i=0;i<8;i++){
		if(x[i]=y){
			cout<<"El numero si se encuentra en la lista.";
			return;
		}
		else{
			cout<<"El numero no se encuentra en la lista.";
			return;
		}
	}
}

int main(){
	int Numeros[8];
	cout<<"Ingrese 8 numeros"<<endl; 
	for(int i=0;i<8;i++){
		cout<<"Ingrese un numero: ";
		cin>>Numeros[i];
	}
	cout<<endl;
	busqueda(Numeros);
	return 0;
}

