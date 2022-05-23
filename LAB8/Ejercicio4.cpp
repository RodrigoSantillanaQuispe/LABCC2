#include <iostream>
#include "BaseEjercicio4.h"
using namespace std;

class Circulo:public Elipse{
	private:
		float radio;
	public:
		Circulo(string,string,float);
		void cambiarcolor();
		void area();
		void perimetro();
		void cambiarTama();
		void imprimir();
};

Circulo::Circulo(string x,string y,float z):Elipse(x,y){
	radio=z;
}

void Circulo::area(){
	Elipse::area();
	cout<<"El area del circulo es "<<3.1416*(radio*radio)<<".\n";
}

void Circulo::perimetro(){
	Elipse::perimetro();
	cout<<"El perimetro del circulo es "<<2*(3.1416*radio)<<".\n";
}

void Circulo::cambiarTama(){
	Elipse::cambiarTama();
	float x;
	cout<<"Ingrese el factor de escala: ";
	cin>>x;
	radio=radio*x;
	cout<<"Cambio realizado con exito\n";
}

void Circulo::imprimir(){
	Elipse::imprimir();
	cout<<"El radio es "<<radio<<".\n";
}

void Circulo::cambiarcolor(){
	Elipse::cambiocolor();
}

int main(){
	int a;
	Forma *vector[3];
	string b,c;
	float d;
	cout<<"Ingrese los siguientes datos para acceder al menu:\n";
	cout<<"\nIngrese el nombre del circulo: ";
	cin>>b;
	cout<<"Ingrese el color del circulo: ";
	cin>>c;
	cout<<"Ingrese el valor del radio del circulo: ";
	cin>>d;
	vector[0]=new Circulo(b,c,d);
	while(a!=6){
		cout<<"\nBienvenido\n";
		cout<<"Tiene estas opciones:\n";
		cout<<"1.Mostrar el area del circulo.\n";
		cout<<"2.Mostrar el perimetro del circulo.\n";
		cout<<"3.Cambiar los lados del circulo, esto se hara mediante un sistema de escala.\n";
		cout<<"4.Mostrar los datos del circulo.\n";
		cout<<"5.Cambiar el color.\n";
		cout<<"Tenga en cuenta que el valor de pi es 3.1416.\n";
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

