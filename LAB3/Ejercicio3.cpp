#include <iostream> 
using namespace std;

void edad(int a,int b,int c,int d,int e,int f){
	int x,y,z,w,v;
	c=c*360;
	b=b*30;
	f=f*360;
	e=e*30;
	x=a+b+c;
	y=d+e+f;
	z=x-y;
	w=z%360;
	v=w%30;
	w=w/30;
	z=z/360;
	cout<<"Su edad es "<<z<<" años, "<<w<<" meses, "<<v<<" dias";
}

int main(){
	int a,b,c,d,e,f;
	cout<<"Ingrese la fecha actual en numeros"<<endl;
	cout<<"Dia: ";
	cin>>a;
	cout<<"Mes: ";
	cin>>b;
	cout<<"Año: ";
	cin>>c;
	cout<<"Ingrese la fecha de nacimiento en numeros"<<endl;
	cout<<"Dia: ";
	cin>>d;
	cout<<"Mes: ";
	cin>>e;
	cout<<"Año: ";
	cin>>f;
	edad(a,b,c,d,e,f);
	return 0;
} 	
