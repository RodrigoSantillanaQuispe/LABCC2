#include <iostream> 
using namespace std;

int potencia(int x, int y){
	for(int i=1;i<y;i++){
		x=x*x;
	}
	return x;
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
