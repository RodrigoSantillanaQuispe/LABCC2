#include <iostream>
using namespace std;

class Cola{
	private:
	    class Nodo{
		    public:
		        int info;
		        Nodo *sig;
		};
    Nodo *raiz;
    Nodo *fondo;
	public:
	    Cola();
	    ~Cola();
	    void insertar(int x);
	    int eliminar();
	    void imprimir();
	    bool vacia();
};

Cola::Cola(){
    raiz=NULL;
    fondo=NULL;
}

Cola::~Cola(){
    Nodo *reco=raiz;
    Nodo *bor;
    while(reco!=NULL){
        bor=reco;
        reco=reco->sig;
        delete bor;
    }
}

void Cola::insertar(int x){
    Nodo *nuevo;
    nuevo=new Nodo();
    nuevo->info=x;
    nuevo->sig=NULL;
    if(vacia()){
        raiz=nuevo;
        fondo=nuevo;
    }
    else{
        fondo->sig=nuevo;
        fondo=nuevo;
    }
}

int Cola::eliminar(){
    if(!vacia()){
        int informacion=raiz->info;
        Nodo *bor=raiz;
        if(raiz==fondo){
            raiz=NULL;
            fondo=NULL;
        }
        else{
            raiz=raiz->sig;
        }
        delete bor;
        return informacion;
    }
    else
        return -1;
}

void Cola::imprimir(){
    Nodo *reco=raiz;
    while(reco!=NULL){
        cout<<reco->info<<"-";
        reco=reco->sig;
    }
    cout<<"\n";
}

bool Cola::vacia(){
    if(raiz==NULL){
        return true;
	}
    else{
        return false;
    }
}

int main(){
	int x=0;
	Cola *cola1=new Cola();
	while(x!=5){
    	cout<<"BIENVENIDO AL MENU\n";
    	cout<<"Tiene estas opciones a elegir: \n";
    	cout<<"1.Insertar elementos en un cola.\n";
    	cout<<"2.Eliminar el primer elemento de la cola.\n";
    	cout<<"3.Crear 2 colas.\n";
    	cout<<"4.Mostrar la lista\n";
    	cout<<"5.SALIR.\n";
    	cout<<"Elija una opcion: ";
    	cin>>x;
    	if(x==1){
    		int y,z;
    		cout<<"\nCuantos elementos desea ingresar? ";
    		cin>>y;
    		cout<<endl;
    		for(int i=0;i<y;i++){
    			cout<<"Ingrese un elemento para la cola: ";
    			cin>>z;
    			cola1->insertar(z);
    			z=0;
			}
			cout<<endl;
		} 
		if(x==2){
    		cout<<"\nEl elemento eliminado sera: "<<cola1->eliminar()<<endl;
    		cout<<endl;
		}
		if(x==3){
			delete cola1;
			Cola *cola1=new Cola();
			Cola *cola2=new Cola();
			int a,b,y,z;
    		cout<<"\nCuantos elementos desea ingresar en la primera cola? ";
		    cin>>a;
		    cout<<"\nCuantos elementos desea ingresar en la segunda cola? ";
		    cin>>y;
		    cout<<endl;
		    for(int i=0;i<a;i++){
    			cout<<"Ingrese un elemento para la primera cola: ";
    			cin>>b;
    			cola1->insertar(b);
    			b=0;
			}
			cout<<endl;
			for(int i=0;i<y;i++){
    			cout<<"Ingrese un elemento para la segunda cola: ";
    			cin>>z;
    			cola2->insertar(z);
    			z=0;
			}
			cout<<"\nLa primera cola es: "<<endl;
		    cola1->imprimir();
		    cout<<"\nLa segunda cola es: "<<endl;
		    cola2->imprimir();
		    cout<<endl;
		}
		if(x==4){
    		cout<<"\nLa cola actual es: "<<endl;
		    cola1->imprimir();
		    cout<<endl;
		}
		if(x==5){
    		cout<<"GRACIAS";
		}
	}
    return 0;
}
