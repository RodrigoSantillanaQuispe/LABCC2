#include <iostream>
using namespace std;

int main(){
	int a;
	int suma=0;
	cout<<"Cuantos numeros deseas ingresar? ";
	cin>>a;
	int numero[a];
    for(int i=0;i<a;i++){
    	cout<<"Ingresa un numero : ";
    	cin>>numero[i];
    	suma=suma+numero[i];
	}
    cout<<"La media es "<<suma/a;	
    return 0;	
}
