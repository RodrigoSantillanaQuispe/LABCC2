#include <iostream> 
using namespace std;

int main(){
	int a,b,c;
	int mayor=0, menor=0, media=0;
	cout<<"Cuantos numeros desea ingresar: ";
	cin>>a;
	int l[a];
	for(int i=0;i<a;i++){
		cout<<"Ingrese un numero: ";
		cin>>l[i];
		media=l[i]+media;
	}
	for(int i=0;i<a;i++){
		if(i==0){
			mayor=l[i];
			menor=l[i];
		}
		else{
			if(l[i]>mayor){
				mayor=l[i];
			}
			if(l[i]<menor){
				menor=l[i];
			}
		}
	}
	cout<<endl;
	cout<<"El numero menor es "<<menor<<endl;
	cout<<"El numero mayor es "<<mayor<<endl;
	cout<<"La media es "<<media/a<<endl;	
}
