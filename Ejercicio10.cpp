#include <iostream>
using namespace std;

int main(){
	int a;
	cout<<"Ingrese el tama�o de la palabra que ingresara: ";
	cin>>a;
	char p[a]={};
	cout<<"Ingrese una palabra: ";
	cin>>p;
	for(int i=a;i>=0;i--){
		cout<<p[i]<<" ";
	}
}
