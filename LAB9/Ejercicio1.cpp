#include <iostream>
using namespace std;

template <class tipo,class tipo2,class tipo3>
tipo mayor_menor(tipo x,tipo2 y,tipo3 z);

int main(){
	int a;
	long b;
	float c;
	cout<<"Ingrese un numeros entero: ";
	cin>>a;
	cout<<"Ingrese un numero de 6 digitos a mas: ";
	cin>>b;
	cout<<"Ingrese un numero con decimal: ";
	cin>>c;
	mayor_menor(a,b,c);
	return 0;
}

template <class tipo,class tipo2,class tipo3>
tipo mayor_menor(tipo x,tipo2 y,tipo3 z){
	float mayor=0,menor=0;
	float N[3];
	N[0]=x;
	N[1]=y;
	N[2]=z;
	for(int i=0;i<3;i++){
		if(N[i]>mayor){
			mayor=N[i];
			if(i==0){
				menor=N[i];
			}
		}
		if(menor>N[i]){
			menor=N[i];
		}
	}
	cout<<"El valor menor es "<<menor<<" y el mayor es "<<mayor<<endl;
}

