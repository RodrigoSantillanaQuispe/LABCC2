#include <iostream> 
#include <string> 
using namespace std;

void DarAlta(string x[][3]){
	int y;
	int z;
	cout<<"------------------------------------------------------------------------------------------------"<<endl;
	cout<<"Estos son los productos ingresados: "<<endl;
	for(int i=0;i<10;i++){
		for(int j=0;j<1;j++){
			cout<<i+1<<". "<<x[i][j]<<endl;
		}
	}
	cout<<endl;
	cout<<"Ingresa el numero del producto que quieres dar de alta: ";
	cin>>y;
	y=y-1;
	for(int i=0;i<10;i++){
		for(int j=0;j<1;j++){
			if(y==i){
				x[i][j]=" ";
				x[i][j+1]=" ";
				x[i][j+2]=" ";
			}
		}
	}
	cout<<endl;
	cout<<"El producto fue dado de alta de forma exitosa, desea ingresar un nuevo producto?"<<endl;
	cout<<"1.Si               2.No"<<endl;
	cout<<"Eliga una opcion: ";
	cin>>z;
	cout<<endl;
	if(z==1){
		for(int i=0;i<10;i++){
			for(int j=0;j<1;j++){
				if(y==i){
					cout<<"Ingrese nuevamente los datos del producto N°"<<i+1<<endl;
					cout<<"Ingrese el nombre del producto: ";
					cin>>x[i][j];
					cout<<"Ingrese el precio del producto: ";
					cin>>x[i][j+1];
					cout<<"Ingrese el stock del producto: ";
					cin>>x[i][j+2];
					cout<<endl;
				}
			}
		}
		cout<<"Producto actualizado correctamente."<<endl;
		cout<<"------------------------------------------------------------------------------------------------"<<endl;
		cout<<endl;
	}
	else if(z==2){
		cout<<"Producto actualizado correctamente."<<endl;
		cout<<"------------------------------------------------------------------------------------------------"<<endl;
		cout<<endl;
	}
}

void BuscarNombre(string x[][3]){
	string y;
	cout<<"------------------------------------------------------------------------------------------------"<<endl;
	cout<<"Ingrese el nombre del producto que quiere buscar: ";
	cin>>y;
	for(int i=0;i<10;i++){
		for(int j=0;j<1;j++){
			if(y==x[i][j]){
				cout<<"Producto encontrado: "<<endl;
				cout<<i+1<<". "<<x[i][j]<<"."<<endl;
				cout<<"------------------------------------------------------------------------------------------------"<<endl;
				cout<<endl;
				return;
			}
		}
	}
	cout<<"Producto no encontrado."<<endl;
	cout<<"------------------------------------------------------------------------------------------------"<<endl;
	cout<<endl;
}

void Modificar(string x[][3]){
	int y;
	cout<<"------------------------------------------------------------------------------------------------"<<endl;
	cout<<"Estos son los productos ingresados: "<<endl;
	for(int i=0;i<10;i++){
		for(int j=0;j<1;j++){
			cout<<i+1<<". "<<x[i][j]<<endl;
		}
	}
	cout<<endl;
	cout<<"Ingresa el numero del producto que quieres modificar stock y precio: ";
	cin>>y;
	y=y-1;
	cout<<endl;
	for(int i=0;i<10;i++){
		for(int j=0;j<1;j++){
			if(y==i){
				x[i][j+1]=" ";
				x[i][j+2]=" ";
				cout<<"Ingresa el nuevo precio y stock del producto N°"<<i+1<<endl;
				cout<<"Ingrese el nuevo precio del producto: ";
				cin>>x[i][j+1];
				cout<<"Ingrese el nuevo stock del producto: ";
				cin>>x[i][j+2];
			}
		}
	}
	cout<<endl;
	cout<<"Producto actualizado correctamente."<<endl;
	cout<<"------------------------------------------------------------------------------------------------"<<endl;
	cout<<endl;
}

int main(){
	string Productos[10][3];
	int x;
	cout<<"Bienvenido a mi tienda"<<endl;
	cout<<"Ingresa los datos de 10 productos"<<endl;
	cout<<endl;
	for(int i=0;i<10;i++){
		cout<<"Ingrese los datos del producto N°"<<i+1<<endl;
		for(int j=0;j<1;j++){
			cout<<"Ingrese el nombre del producto: ";
			cin>>Productos[i][j];
			cout<<"Ingrese el precio del producto: ";
			cin>>Productos[i][j+1];
			cout<<"Ingrese el stock del producto: ";
			cin>>Productos[i][j+2];
			cout<<endl;
		}
	}
	while(x!=4){
		cout<<"BIENVENDIO AL MENU"<<endl;
		cout<<"Puedes elegir entre estas opciones:"<<endl;
		cout<<endl;
		cout<<"1.Dar de alta un producto nuevo (Borrar los datos de un producto)."<<endl;
		cout<<"2.Buscar un producto por su nombre."<<endl;
		cout<<"3.Modificar el stock y precio de un producto dado."<<endl;
		cout<<"4.Salir."<<endl;
		cout<<endl;
		cout<<"Ingresa el numero de la opcion que quieres escoger: "<<endl;
		cin>>x;
		cout<<endl;
		if(x==1){
			DarAlta(Productos);
		}
		else if(x==2){
			BuscarNombre(Productos);
		}
		else if(x==3){
			Modificar(Productos);
		}
		else if(x==4){
			cout<<"MUCHAS GRACIAS"<<endl;
		}
	}
	return 0;
}
