#include <iostream>
using namespace std;

template <class tipo,class tipo2>
tipo ope_basica(tipo x,tipo2 y);

int main(){
	int a;
	float b;
	cout<<"Ingrese un numeros entero: ";
	cin>>a;
	cout<<"Ingrese un numero con decimal: ";
	cin>>b;
	ope_basica(a,b);
	return 0;
}

template <class tipo,class tipo2>
tipo ope_basica(tipo x,tipo2 y){
	cout<<"\nEl resultado de la suma de los datos ingresados es "<<x+y<<endl;
	cout<<"El resultado de la resta de los datos ingresados es "<<x-y<<endl;
	cout<<"El resultado de la multiplicacion de los datos ingresados es "<<x*y<<endl;
	cout<<"El resultado de la division de los datos ingresados es "<<x/y<<endl;
}
