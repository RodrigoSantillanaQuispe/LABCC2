#include <iostream>
using namespace std;

int main(){
    int numero[9];
    int suma=0;
    for(int i=0;i<10;i++){
    	cout<<"Ingresa un numero : ";
    	cin>>numero[i];
	}
	for(int i=0;i<10;i++){
    	if(numero[i]<0){
    		suma=suma+(numero[i]);
		}
	}
    cout<<"La suma de los numeros negativos es "<<suma;
    return 0;	
}


