#include <iostream>
using namespace std;

int main(){
	int x;
	cout<<"Ingrese el numero de digitos de su contraseņa: ";
    cin>>x;
    char contra[x];
    char contra2[x];
    int a=0;
    cout<<"Ingrese su contraseņa: ";
    cin>>contra;
    cout<<"Vuelva a ingresar su contraseņa: ";
    cin>>contra2;
	for(int i=0;i<x;++i){
		if(contra[i]==contra2[i]){
			a++;
		}
	}
	if(a==x){
		cout<<"Las contraseņas coinciden";
	}
	else{
		cout<<"Las contraseņas no coinciden";
	}
    return 0;
}

