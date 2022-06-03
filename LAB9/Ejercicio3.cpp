#include <iostream>
using namespace std;

template <class tipo,class tipo2>
tipo correo(tipo x,tipo2 y);

int main(){
	char a;
	string b;
	for(int i=0;i<5;i++){
		cout<<"Ingrese la primera letra de su nombre: ";
		cin>>a;
		cout<<"Ingrese su apellido: ";
		cin>>b;
		correo(a,b);
	}
	return 0;
}

template <class tipo,class tipo2>
tipo correo(tipo x,tipo2 y){
	cout<<"Su correo es "<<x<<y<<"@unsa.edu.pe\n";
	cout<<endl;
}
