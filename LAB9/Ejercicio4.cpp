#include <iostream>
using namespace std;

template <class tipo,class tipo2>
tipo mayor(tipo x[5],tipo2 y[5]);

template <class tipo,class tipo2>
tipo menor(tipo x[5],tipo2 y[5]);

int main(){
	int ArrayEntero[5]={10,7,2,8,6};
	float ArrayFloat[5]={12.1,8.7,5.6,8.4,1.2};
	cout<<"La lista de enteros es ArrayEntero[5]={10,7,2,8,6}\n";
	cout<<"La lista de float es ArrayFloat[5]={12.1,8.7,5.6,8.4,1.2}\n\n";
	mayor(ArrayEntero,ArrayFloat);
	menor(ArrayEntero,ArrayFloat);
	return 0;
}

template <class tipo,class tipo2>
tipo mayor(tipo x[5],tipo2 y[5]){
	int mayor1=0;
	float mayor2=0;
	for(int i=0;i<5;i++){
		if(x[i]>mayor1){
			mayor1=x[i];
		}
		if(y[i]>mayor2){
			mayor2=y[i];
		}
	}
	cout<<"El numero mayor del Array de enteros es "<<mayor1<<" y el numero mayor del Array de float es "<<mayor2<<endl;
}

template <class tipo,class tipo2>
tipo menor(tipo x[5],tipo2 y[5]){
	int menor1=10000;
	float menor2=10000;
	for(int i=0;i<5;i++){
		if(x[i]<menor1){
			menor1=x[i];
		}
		if(y[i]<menor2){
			menor2=y[i];
		}
	}
	cout<<"El numero menor del Array de enteros es "<<menor1<<" y el numero menor del Array de float es "<<menor2<<endl;
}

