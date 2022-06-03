#include <iostream>
using namespace std;

template <class tipo,class tipo2>
tipo ascendente(tipo *x,tipo2 *y);

template <class tipo,class tipo2>
tipo descendente(tipo *x,tipo2 *y);

int main(){
	int ArrayEntero[9]={5,7,2,8,6,1,3,4,9};
	float ArrayFloat[5]={10.1, 8.4, 3.6, 4.4, 11.2};
	int *Pun_Entero;
	float *Pun_Float;
	Pun_Entero=ArrayEntero;
	Pun_Float=ArrayFloat;
	cout<<"La lista de enteros es ArrayEntero[9]={5,7,2,8,6,1,3,4,9}\n";
	cout<<"La lista de float es ArrayFloat[5]={10.1, 8.4, 3.6, 4.4, 11.2}\n\n";
	ascendente(Pun_Entero,Pun_Float);
	descendente(Pun_Entero,Pun_Float);
	return 0;
}

template <class tipo,class tipo2>
tipo ascendente(tipo *x,tipo2 *y){
	int aux1;
	float aux2;
	for(int i=0;i<8;i++){
		for(int j=0;j<8-i;j++){
			if(x[j]>x[j+1]){
				aux1=x[j];
				x[j]=x[j+1];
				x[j+1]=aux1;
			}
		}
	}
	for(int i=0;i<4;i++){
		for(int j=0;j<4-i;j++){
			if(y[j]>y[j+1]){
				aux2=y[j];
				y[j]=y[j+1];
				y[j+1]=aux2;
			}
		}
	}
	cout<<"Orden Ascendente: \n";
	cout<<"Array Entero: \n";
	for(int i=0;i<9;i++){
		cout<<*x++<<"  ";
	}
	cout<<"\n\nArray Float: \n";
	for(int i=0;i<5;i++){
		cout<<*y++<<"  ";
	}
}

template <class tipo,class tipo2>
tipo descendente(tipo *x,tipo2 *y){
	int aux1;
	float aux2;
	for(int i=0;i<8;i++){
		for(int j=0;j<8-i;j++){
			if(x[j]<x[j+1]){
				aux1=x[j];
				x[j]=x[j+1];
				x[j+1]=aux1;
			}
		}
	}
	for(int i=0;i<4;i++){
		for(int j=0;j<4-i;j++){
			if(y[j]<y[j+1]){
				aux2=y[j];
				y[j]=y[j+1];
				y[j+1]=aux2;
			}
		}
	}
	cout<<"\n\n\nOrden Descendente: \n";
	cout<<"Array Entero: \n";
	for(int i=1;i<=9;i++){
		cout<<*x++<<"  ";
	}
	cout<<"\n\nArray Float: \n";
	for(int i=1;i<=5;i++){
		cout<<*y++<<"  ";
	}
}


