#include <iostream>
#include "BaseEjercicio3.h"
using namespace std;

class Cuadrado:public Rectangulo{
	private:
		float lado;
	public:
		Cuadrado(string,string,float);
		void cambiarcolor();
		void area();
		void perimetro();
		void cambiarTama();
		void imprimir();
};

Cuadrado::Cuadrado(string x,string y,float z):Rectangulo(x,y){
	lado=z;
}

void Cuadrado::area(){
	Rectangulo::area();
	cout<<"El area del rectangulo es "<<(lado*lado)<<".\n";
}

void Cuadrado::perimetro(){
	Rectangulo::perimetro();
	cout<<"El perimetro del rectangulo es "<<(lado*4)<<".\n";
}

void Cuadrado::cambiarTama(){
	Rectangulo::cambiarTama();
	float x;
	cout<<"Ingrese el factor de escala: ";
	cin>>x;
	lado=lado*x;
	cout<<"Cambio realizado con exito\n";
}

void Cuadrado::imprimir(){
	Rectangulo::imprimir();
	cout<<"El lado es "<<lado<<".\n";
}

void Cuadrado::cambiarcolor(){
	Rectangulo::cambiocolor();
}

int main(){
	int a;
	Forma *vector[3];
	string b,c;
	float d;
	cout<<"Ingrese los siguientes datos para acceder al menu:\n";
	cout<<"\nIngrese el nombre del cuadrado: ";
	cin>>b;
	cout<<"Ingrese el color del cuadrado: ";
	cin>>c;
	cout<<"Ingrese el valor del lado del cuadrado: ";
	cin>>d;
	vector[0]=new Cuadrado(b,c,d);
	while(a!=6){
		cout<<"\nBienvenido\n";
		cout<<"Tiene estas opciones:\n";
		cout<<"1.Mostrar el area del cuadrado.\n";
		cout<<"2.Mostrar el perimetro del cuadrado.\n";
		cout<<"3.Cambiar los lados del cuadrado, esto se hara mediante un sistema de escala.\n";
		cout<<"4.Mostrar los datos del cuadrado.\n";
		cout<<"5.Cambiar el color.\n";
		cout<<"6.SALIR.\n";
		cout<<"Elija una opcion porfavor: ";
		cin>>a;
		cout<<endl;
		if(a==1){
			vector[0]->area();
		}
		else if(a==2){
			vector[0]->perimetro();
		}
		else if(a==3){
			vector[0]->cambiarTama();
		}
		else if(a==4){
			vector[0]->imprimir();
		}
		else if(a==5){
			vector[0]->cambiocolor();
		}
		else if(a==6){
			cout<<"Gracias.\n";
		}
		else if(a>6){
			cout<<"Ingrese una opcion valida.\n";
		}
	}
	return 0;
}
