#include <iostream> 
using namespace std;

int main(){
	int a,b,*d_a,*d_b;
	cout<<"Ingrese el primer numero: ";
	cin>>a;
	cout<<"Ingrese el segundo numero: ";
	cin>>b;
	d_a=&b;
	d_b=&a;
	cout<<"Los numeros se intercanbiaron, asi que ahora el primer numero es "<<*d_a<<" y el segundo numero es "<<*d_b<<".";
	return 0;
}

