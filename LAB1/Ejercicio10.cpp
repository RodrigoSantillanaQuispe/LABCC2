#include <iostream>
using namespace std;

int main(){
	int x;
	cout<<"Ingrese el numero de digitos de su contrase�a: ";
    cin>>x;
    char contra[x];
    char contra2[x];
    int a=0;
    cout<<"Ingrese su contrase�a: ";
    cin>>contra;
    cout<<"Vuelva a ingresar su contrase�a: ";
    cin>>contra2;
	for(int i=0;i<x;++i){
		if(contra[i]==contra2[i]){
			a++;
		}
	}
	if(a==x){
		cout<<"Las contrase�as coinciden";
	}
	else{
		cout<<"Las contrase�as no coinciden";
	}
    return 0;
}

