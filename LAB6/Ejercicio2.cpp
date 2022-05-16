#include <iostream> 
using namespace std;

class Alumno{
		private:
			int CUI,n1,n2,n3;
			string nombre;
		public:
			Alumno(int,string,int,int,int);
			void datos();
			void promedio();
};

Alumno::Alumno(int v,string w,int x,int y,int z){
	CUI=v;
	nombre=w;
	n1=x;
	n2=y;
	n3=z;
}

void Alumno::datos(){
	cout<<"Cui: "<<CUI<<"."<<endl;
	cout<<"El primero nombre es: "<<nombre<<"."<<endl;
}

void Alumno::promedio(){
	float x;
	x=(n1+n2+n3)/3;
	if(x<10.5){
		cout<<"El promedio del alumno es "<<x<<", no aprobo la asignatura de Ciencias de la COmputacion II."<<endl;
	}
	else{
		cout<<"El promedio del alumno es "<<x<<", aprobo la asignatura de Ciencias de la COmputacion II."<<endl;
	}
}

int main(){
	string d;
	int e;
	int a,b,c;
	cout<<"Ingrese el CUI: ";
	cin>>e;
	cout<<"Ingrese el nombre: ";
	cin>>d;
	cout<<"Ingrese la primera nota parcial: ";
	cin>>a;
	cout<<"Ingrese la segunda nota parcial: ";
	cin>>b;
	cout<<"Ingrese la tercera nota parcial: ";
	cin>>c;
	cout<<endl;
	Alumno r1(e,d,a,b,c);
	r1.datos();
	r1.promedio();
	return 0;
}
