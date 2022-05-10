#include <iostream>
#include <conio.h> 
using namespace std;

struct Nodo{
	string dato;
	Nodo *siguiente;
};

void Insertar(Nodo *&Lista,string x){
	Nodo *nuevo_nodo=new Nodo();
	nuevo_nodo->dato=x;
	Nodo* aux1=Lista;
	Nodo* aux2;
	while((aux1!=NULL)&&(aux1->dato<x)){
		aux2=aux1;
		aux1=aux1->siguiente;
	}
	if(Lista==aux1){
		Lista=nuevo_nodo;
	}
	else{
		aux2->siguiente=nuevo_nodo;
	}
	cout<<"Se ingreso de forma correcta."<<endl;
	nuevo_nodo->siguiente=aux1;
}

void Mostrar(Nodo *Lista){
	cout<<endl;
	Nodo *actual=new Nodo();
	actual=Lista;
	while(actual!=NULL){
		cout<<actual->dato<<" -> ";
		actual=actual->siguiente;
	}
	cout<<endl;
}

void Eliminar(Nodo *&Lista,string x){
	if(Lista!=NULL){
		Nodo *aux_borrar;
		Nodo *anterior=NULL;
		aux_borrar=Lista;
		while((aux_borrar!=NULL)&&(aux_borrar->dato!=x)){
		    anterior=aux_borrar;
		    aux_borrar=aux_borrar->siguiente;
		}
		if(aux_borrar==NULL){
		    cout<<"El elemento no existe";
		}
		else if(anterior==NULL){
		    Lista=Lista->siguiente;
		    delete aux_borrar;
		}
		else{
			anterior->siguiente=aux_borrar->siguiente;
			delete aux_borrar;
		}
	}
	cout<<"Elemento borrado exitosamente."<<endl;
}

void Buscar(Nodo *Lista,string x){
	bool band=false;
	Nodo *actual=new Nodo();
	actual=Lista;
	while((actual!=NULL)&&(actual->dato<=x)){
		if(actual->dato==x){
			band=true;
		}
		actual=actual->siguiente;
	}
	if(band==true){
		cout<<"Elemento "<<x<<" si ha sido encontrado."<<endl;
	}
	else{
		cout<<"Elemento "<<x<<" no ha sido encontrado."<<endl;
	}
}

int main(){
	Nodo *Lista=NULL;
	int a=0;
	string b;
	while(a!=5){
		cout<<"MENU"<<endl;
		cout<<"1.Inserte un numero a la lista."<<endl;
		cout<<"2.Mostrar los elementos de la lista."<<endl;
		cout<<"3.Eliminar un elemento de la lista."<<endl;
		cout<<"4.Buscar un elemento en la lista"<<endl;
		cout<<"5.SALIR."<<endl;
		cout<<"Eliga una opcion: ";
		cin>>a;
		if(a==1){
			cout<<endl;
			cout<<"Ingrese un numero: ";
			cin>>b;
			Insertar(Lista,b);
		}
		else if(a==2){
			Mostrar(Lista);
		}
		else if(a==3){
			cout<<endl;
			cout<<"Ingrese el numero de la lista que desea eliminar: ";
			cin>>b;
			Eliminar(Lista,b);
		}
		else if(a==4){
			cout<<endl;
			cout<<"Ingrese el elemento que desea buscar: ";
			cin>>b;
			Buscar(Lista,b);
		}
	cout<<endl;
	}
	return 0;	
}

