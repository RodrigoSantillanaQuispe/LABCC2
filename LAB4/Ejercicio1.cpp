#include <iostream> 
using namespace std;

int main(){
	string Datos[3][4];
	cout<<"Ingrese los datos de 3 personas."<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<1;j++){
			cout<<"Ingrese el nombre de la persona N°"<<i+1<<": ";
			cin>>Datos[i][j];
			cout<<"Ingrese el apellido de la persona N°"<<i+1<<": ";
			cin>>Datos[i][j+1];
			cout<<"Ingrese el edad de la persona N°"<<i+1<<": ";
			cin>>Datos[i][j+2];
			cout<<"Ingrese el DNI de la persona N°"<<i+1<<": ";
			cin>>Datos[i][j+3];
			cout<<endl;
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<1;j++){
			cout<<"Los datos de la persona N°"<<i+1<<" son: "<<endl;
			cout<<"Nombre: "<<Datos[i][j]<<endl;
			cout<<"Apellido: "<<Datos[i][j+1]<<endl;
			cout<<"Edad: "<<Datos[i][j+2]<<endl;
			cout<<"DNI: "<<Datos[i][j+3]<<endl;
			cout<<endl;
		}
	}
	return 0;
}


