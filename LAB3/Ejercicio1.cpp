#include <iostream> 
using namespace std;

int potencia(int x, int y){
	int z=1;
	for(int i=0;i<y;i++){
		z=z*x;
	}
	return z;
}

int main(){
	int a,b,r;
	cout<<"Ingrese un numero: ";
	cin>>a;
	cout<<"Ingrese el exponente: ";
	cin>>b;
	r=potencia(a,b);	
	cout<<"El resultado es "<<r;
	return 0;
} 	
