#include <iostream>
#include "BaseEjercicio1.h"
using namespace std;

class Rectangulo:public Forma{
	private:
		float lmenor,lmayor;
	public:
		Rectangulo(string,string,float,float);
		void cambiarcolor();
		void area();
		void perimetro();
		void cambiarTama();
		void imprimir();
};

Rectangulo::Rectangulo(string x,string y,float z,float w):Forma(x,y){
	lmenor=z;
	lmayor=w;
}

void Rectangulo::area(){
	Forma::area();
	cout<<"El area del rectangulo es "<<lmenor*lmayor<<".\n";
}

void Rectangulo::perimetro(){
	Forma::perimetro();
	cout<<"El perimetro del rectangulo es "<<(2*lmenor)+(2*lmayor)<<".\n";
}

void Rectangulo::cambiarTama(){
	Forma::cambiarTama();
	float x;
	cout<<"Ingrese el factor de escala: ";
	cin>>x;
	lmenor=lmenor*x;
	lmayor=lmayor*x;
	cout<<"Cambio realizado con exito\n";
}

void Rectangulo::imprimir(){
	Forma::imprimir();
	cout<<"El lado menor es "<<lmenor<<" y el lado mayor es "<<lmayor<<".\n";
}

void Rectangulo::cambiarcolor(){
	Forma::cambiocolor();
}

int main(){
	int a;
	Forma *vector[3];
	string b,c;
	float d,e;
	cout<<"Ingrese los siguientes datos para acceder al menu:\n";
	cout<<"\nIngrese el nombre del rectangulo: ";
	cin>>b;
	cout<<"Ingrese el color del rectangulo: ";
	cin>>c;
	cout<<"Ingrese el valor del lado menor del rectangulo: ";
	cin>>d;
	cout<<"Ingrese el valor del lado mayor del rectangulo: ";
	cin>>e;
	vector[0]=new Rectangulo(b,c,d,e);
	while(a!=6){
		cout<<"\nBienvenido\n";
		cout<<"Tiene estas opciones:\n";
		cout<<"1.Mostrar el area del rectangulo.\n";
		cout<<"2.Mostrar el perimetro del rectangulo.\n";
		cout<<"3.Cambiar los lados del rectangulo, esto se hara mediante un sistema de escala.\n";
		cout<<"4.Mostrar los datos del rectangulo.\n";
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







