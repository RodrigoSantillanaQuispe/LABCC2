#include <iostream> 
using namespace std;

class Edad{
		private:
			int fa1,fa2,fa3,fn1,fn2,fn3;
			string nombre;
		public:
			Edad(string,int,int,int,int,int,int);
			void edad();
};

Edad::Edad(string t,int u,int v,int w,int x,int y,int z){
	nombre=t;
	fa1=u;
	fa2=v;
	fa3=w;
	fn1=x;
	fn2=y;
	fn3=z;
}

void Edad::edad(){
	int a,b,c,d,e;
	cout<<"Su nombre es: "<<nombre<<"."<<endl;
	fa3=fa3*360;
	fa2=fa2*30;
	fn3=fn3*360;
	fn2=fn2*30;
	a=fa1+fa2+fa3;
	b=fn1+fn2+fn3;
	c=a-b;
	d=c%360;
	e=d%30;
	d=d/30;
	c=c/360;
	cout<<"Su edad es "<<c<<" años, "<<d<<" meses, "<<e<<" dias.";
}

int main(){
	string g;
	int a,b,c,d,e,f;
	cout<<"Ingrese su nombre: ";
	cin>>g;
	cout<<endl;
	cout<<"Ingrese la fecha actual en numeros"<<endl;
	cout<<"Dia: ";
	cin>>a;
	cout<<"Mes: ";
	cin>>b;
	cout<<"Año: ";
	cin>>c;
	cout<<endl;
	cout<<"Ingrese la fecha de nacimiento en numeros"<<endl; 
	cout<<"Dia: ";
	cin>>d;
	cout<<"Mes: ";
	cin>>e;
	cout<<"Año: ";
	cin>>f;
	Edad r1(g,a,b,c,d,e,f);
	cout<<endl;
	r1.edad();
	return 0;
}
