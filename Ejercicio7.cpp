#include <iostream>
using namespace std;

int main(){
	int a,b,c,d;
	cout<<"Ingrese el numero de estudiantes: ";
  	cin>>a;
  	cout<<endl;
  	for(int i=0;i<a;i++){
		cout<<"Ingrese la primera nota del estudiente numero "<<i+1<<": ";
		cin>>b;
		cout<<"Ingrese la segunda nota del estudiente numero "<<i+1<<": ";
		cin>>c;
		cout<<"Ingrese la tercera nota del estudiente numero "<<i+1<<": ";
		cin>>d;
		cout<<"El primedio del estudiante es "<<(b+c+d)/3<<"."<<endl;
		cout<<endl;
		b=0;
		c=0;
		d=0;
	}
}
