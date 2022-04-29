#include <iostream> 
using namespace std;

int par(int x){
	if(x%2==0){
		return 1;
	}
	else{
		return 0;
	}
}

int suma(int x){
	int y=0;
	for(int i=0;i<=x;i++){
		if(i%2!=0){
			y=y+i;
		}
	}
	return y;
}

int main(){
	int a,b=0,r,c;
	cout<<"Ingrese un numero: ";
	cin>>a;
	while(b<1){
		r=par(a);
		if(r==1){
			cout<<"El numero ingresado es par"<<endl;
			b++;
		}
		else{
			cout<<"El numero que ingreso no es par, ingrese otro por favor: ";
			cin>>a;
			r=par(a);
		}
	}
	c=suma(a);
	cout<<"La suma de los impares de 0 a "<<a<<" es "<<c<<endl;
	return 0;
} 
