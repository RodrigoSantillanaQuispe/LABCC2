#include <iostream>
#include "Lista.h"
using namespace std;
 
int main(){
    Lista<int> lista_1;
    int ele,dim,pos;
    int x=0;
    while(x!=9){
    	cout<<"BIENVENIDO AL MENU\n";
    	cout<<"Tiene estas opciones a elegir: \n";
    	cout<<"1.Crear una lista enlazada e ingresar elementos en ella.\n";
    	cout<<"2.Ingresar un elemento al inicio de la lista.\n";
    	cout<<"3.Ingresar un elemento al final de la lista.\n";
    	cout<<"4.Ingresar un elemento en cualquier posicion de la lista.\n";
    	cout<<"5.Eliminar el ultimo elemento de la lista.\n";
    	cout<<"6.Eliminar el primer elemento de la lista.\n";
    	cout<<"7.Eliminar un elemento en cualquier posicion de la lista.\n";
    	cout<<"8.Ordenar la lista de forma ascendente o descendenten.\n";
    	cout<<"9.SALIR.\n";
    	cout<<"Elija una opcion: ";
    	cin>>x;
    	if(x==1){
    		int z;
    		cout<<"\nDesea ingresar manualmente los elementos o que se generen de forma aleatoria?\n";
    		cout<<"1.Ingresar de forma manual\n";
    		cout<<"2.Ingresar de forma aleatoria\n";
    		cout<<"Elija una alternativa: ";
    		cin>>z;
    		if(z==1){
    			cout<<"\nIngresa la dimensión de la lista: "<<endl;
		   		cin>>dim;
		   		lista_1.Ingr_Man(dim);
			}
			else if(z==2){
				cout<<"\nIngresa la dimensión de la lista: "<<endl;
		   		cin>>dim;
		   		lista_1.Ingr_Ran(dim);
			}
			
	   		cout<<"Esta es la lista generada: "<<endl;
    		lista_1.Imprimir();
		}
		if(x==2){
    		cout<<"\nIngrese el elemente que desea aumentar a la lista: "<<endl;
		    cin>>ele;
		    lista_1.Aum_Ini(ele);
		    lista_1.Imprimir();
		}
		if(x==3){
    		cout<<"\nIngrese el elemente que desea aumentar a la lista: "<<endl;
		    cin>>ele;
		    lista_1.Aum_Fin(ele);
		    lista_1.Imprimir();
		}
		if(x==4){
    		cout<<"\nIngrese un elemento, este se ordenara de forma automatica en la lista: "<<endl;
		    cin>>ele;
		    lista_1.Aum_Ord(ele);
		    lista_1.Imprimir();
		}
		if(x==5){
			cout<<"\nLa lista actualizada es: \n";
		    lista_1.Eliminar(dim);
		    lista_1.Imprimir();
		}
		if(x==6){
    		cout<<"\nLa lista actualizada es: \n";
		    lista_1.Eliminar(1);
		    lista_1.Imprimir();
		}
		if(x==7){
    		cout<<"\nIngrese la posicion del elemento que desea eliminar: "<<endl;
	   		cin>>pos;
		    lista_1.Eliminar(pos);
		    lista_1.Imprimir();
		}
		if(x==8){
			int y;
    		cout<<"\nLos elementos se pueden ordenar de la siguiente forma: \n"<<endl;
    		cout<<"1.Ascendente\n";
    		cout<<"2.Descendente\n";
    		cout<<"Elija una opcion: ";
    		cin>>y;
    		if(y==1){
    			cout<<"\nLista ordenada ascendentemente: "<<endl;
			    lista_1.Ord_Asc();
			    lista_1.Imprimir();
			}
			else if(y==2){
				cout<<"\nLista ordenada descendentemente: "<<endl;
			    lista_1.Ord_Des();
			    lista_1.Imprimir();
			}
		}
		if(x==9){
    		cout<<"GRACIAS";
		}
	}
    return 0;
}
