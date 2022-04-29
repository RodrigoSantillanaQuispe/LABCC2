#include <iostream>
using namespace std;

int main(){
	int x;
	cout<<"Ingrese el numero de digitos de su contraseña: ";
    cin>>x;
    char contra[x];
    char contra2[x];
    int a=0;
    cout<<"Ingrese su contraseña: ";
    cin>>contra;
    cout<<"Vuelva a ingresar su contraseña: ";
    cin>>contra2;
	for(int i=0;i<x;++i){
		if(contra[i]==contra2[i]){
			a++;
		}
	}
	if(a==x){
		cout<<"Las contraseñas coinciden";
	}
	else{
		cout<<"Las contraseñas no coinciden";
	}
    return 0;
}

