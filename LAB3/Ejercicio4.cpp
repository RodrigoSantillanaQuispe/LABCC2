#include <iostream> 
using namespace std;

void primos(int x){
	int y=1,z=0;
	for(int i=1;i<=x;i++){
		if(x%i==0){
			z++;
		}
	}
	if(z==2){
		cout<<x<<endl;
		y++;
	}
	z=0;
}

int main(){
	int a,r;
	cout<<"Ingrese un numero: ";
	cin>>a;
	cout<<"Los numeros primos entre 1 y "<<a<<" son:"<<endl;
	for(int i=1;i<a;i++){
		primos(i);
	}
	return 0;
} 	
