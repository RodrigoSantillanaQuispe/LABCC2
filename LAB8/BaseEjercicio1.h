#include <iostream>
using namespace std;

class Forma{
	private:
		string nombre;
		string color;
	public:
		Forma(string,string);
		virtual void cambiocolor();
		virtual void imprimir();
		virtual void area();
		virtual void perimetro();
		virtual void cambiarTama();		
};

Forma::Forma(string x,string y){
	nombre=x;
	color=y;
}

void Forma::cambiocolor(){
	cout<<"Este es el color actual: "<<color<<endl;
	cout<<"Ingrese el nuevo color: ";
	cin>>color;
	cout<<"\nCambio realizado con exito\n";
}

void Forma::imprimir(){
	cout<<"El nombre de la forma es: "<<nombre<<endl;
	cout<<"El color de la forma es: "<<color<<endl;
}

void Forma::area(){
}

void Forma::perimetro(){
}

void Forma::cambiarTama(){
}
