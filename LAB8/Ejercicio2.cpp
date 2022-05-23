#include <iostream>
#include "BaseEjercicio2.h"
using namespace std;

class Elipse:public Forma{
	private:
		float rmenor,rmayor;
	public:
		Elipse(string,string,float,float);
		void cambiarcolor();
		void area();
		void perimetro();
		void cambiarTama();
		void imprimir();
};

Elipse::Elipse(string x,string y,float z,float w):Forma(x,y){
	rmenor=z;
	rmayor=w;
}

void Elipse::area(){
	Forma::area();
	cout<<"El area del Elipse es "<<3.1416*(rmenor*rmayor)<<".\n";
}

void Elipse::perimetro(){
	Forma::perimetro();
	cout<<"El perimetro del Elipse es "<<3.1416*(rmenor+rmayor)<<".\n";
}

void Elipse::cambiarTama(){
	Forma::cambiarTama();
	float x;
	cout<<"Ingrese el factor de escala: ";
	cin>>x;
	rmenor=rmenor*x;
	rmayor=rmayor*x;
	cout<<"Cambio realizado con exito\n";
}

void Elipse::imprimir(){
	Forma::imprimir();
	cout<<"El radio menor es "<<rmenor<<" y el radio mayor es "<<rmayor<<".\n";
}

void Elipse::cambiarcolor(){
	Forma::cambiocolor();
}

int main(){
	int a;
	Forma *vector[3];
	string b,c;
	float d,e;
	cout<<"Ingrese los siguientes datos para acceder al menu:\n";
	cout<<"\nIngrese el nombre del elipse: ";
	cin>>b;
	cout<<"Ingrese el color del elipse: ";
	cin>>c;
	cout<<"Ingrese el valor del radio menor del elipse: ";
	cin>>d;
	cout<<"Ingrese el valor del radio mayor del elipse: ";
	cin>>e;
	vector[0]=new Elipse(b,c,d,e);
	while(a!=6){
		cout<<"\nBienvenido\n";
		cout<<"Tiene estas opciones:\n";
		cout<<"1.Mostrar el area del elipse.\n";
		cout<<"2.Mostrar el perimetro del elipse.\n";
		cout<<"3.Cambiar los lados del elipse, esto se hara mediante un sistema de escala.\n";
		cout<<"4.Mostrar los datos del elipse.\n";
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

