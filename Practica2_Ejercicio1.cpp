#include <iostream> 
using namespace std;

int main(){
	int suma=0;
	for(int i=2;i<=100;i++){
		if(i%2==0){
			suma=suma+i;
		}
	}
	cout<<"La suma de los numeros pares entre 2 y 100 es "<<suma;
}
