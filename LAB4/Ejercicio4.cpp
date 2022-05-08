#include <iostream>
using namespace std;

int main(){
	int Numeros[25];
	int w=0,x=1,z=0;
	for(int j=0;j<100;j++){
		for(int i=1;i<=x;i++){
			if(x%i==0){
				z++;
			}
		}
		if(z==2){
			Numeros[w]=x;
			w++;
		}
		z=0;
		x++;
	}
	cout<<"Los numeros primos comprendidos entre 1 y 100 son: "<<endl;
	for(int i=24;i>=0;i--){
		cout<<Numeros[i]<<" ";
	}
}


