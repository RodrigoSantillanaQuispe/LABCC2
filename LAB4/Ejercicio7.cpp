#include <iostream> 
#include <string> 
using namespace std;

void FilaArriba(int x[][3],int y[][3]){
	cout<<"------------------------------------------------------------------------------------------------"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(i<2){
				y[i][j]=x[i+1][j];
			}
			else{
				y[i][j]=x[i-2][j];
			}
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			x[i][j]=y[i][j];
			y[i][j]=0;
		}
	}
	cout<<endl;
	cout<<"Los cambios fueron aplicados correctamente, esta es la matriz resultante:"<<endl;
	cout<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<x[i][j]<<"  ";
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<"------------------------------------------------------------------------------------------------"<<endl;
	cout<<endl;
}

void FilaAbajo(int x[][3],int y[][3]){
	cout<<"------------------------------------------------------------------------------------------------"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(i>0){
				y[i][j]=x[i-1][j];
			}
			else{
				y[i][j]=x[i+2][j];
			}
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			x[i][j]=y[i][j];
			y[i][j]=0;
		}
	}
	cout<<endl;
	cout<<"Los cambios fueron aplicados correctamente, esta es la matriz resultante:"<<endl;
	cout<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<x[i][j]<<"  ";
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<"------------------------------------------------------------------------------------------------"<<endl;
	cout<<endl;
}

void ColumnaIzquierda(int x[][3],int y[][3]){
	cout<<"------------------------------------------------------------------------------------------------"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(j<2){
				y[i][j]=x[i][j+1];
			}
			else{
				y[i][j]=x[i][j-2];
			}
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			x[i][j]=y[i][j];
			y[i][j]=0;
		}
	}
	cout<<endl;
	cout<<"Los cambios fueron aplicados correctamente, esta es la matriz resultante:"<<endl;
	cout<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<x[i][j]<<"  ";
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<"------------------------------------------------------------------------------------------------"<<endl;
	cout<<endl;
}

void ColumnaDerecha(int x[][3],int y[][3]){
	cout<<"------------------------------------------------------------------------------------------------"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(j>0){
				y[i][j]=x[i][j-1];
			}
			else{
				y[i][j]=x[i][j+2];
			}
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			x[i][j]=y[i][j];
			y[i][j]=0;
		}
	}
	cout<<endl;
	cout<<"Los cambios fueron aplicados correctamente, esta es la matriz resultante:"<<endl;
	cout<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<x[i][j]<<"  ";
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<"------------------------------------------------------------------------------------------------"<<endl;
	cout<<endl;
}

int main(){
	int Matriz[3][3];
	int Aux[3][3];
	int x=0;
	for(int i=0;i<3;i++){
		cout<<"Ingrese los numeros de la fila "<<i+1<<endl;
		for(int j=0;j<3;j++){
			cout<<"Ingrese un numero: ";
			cin>>Matriz[i][j];
		}
		cout<<endl;
	}
	cout<<"Esta es tu matriz inicial:"<<endl;
	cout<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<Matriz[i][j]<<"  ";
		}
		cout<<endl;
	}
	cout<<endl;
	while(x!=5){
		cout<<"BIENVENDIO AL MENU"<<endl;
		cout<<"Puedes elegir entre estas opciones:"<<endl;
		cout<<endl;
		cout<<"1.Mover las filas hacia arriba."<<endl;
		cout<<"2.Mover las filas hacia abajo."<<endl;
		cout<<"3.Mover las columnas hacia la derecha."<<endl;
		cout<<"4.Mover las columnas hacia la izquierda."<<endl;
		cout<<"5.Salir."<<endl;
		cout<<endl;
		cout<<"Ingresa el numero de la opcion que quieres escoger: "<<endl;
		cin>>x;
		cout<<endl;
		if(x==1){
			FilaArriba(Matriz,Aux);
		}
		else if(x==2){
			FilaAbajo(Matriz,Aux);
		}
		else if(x==3){
			ColumnaDerecha(Matriz,Aux);
		}
		else if(x==4){
			ColumnaIzquierda(Matriz,Aux);;
		}
		else if(x==5){
			cout<<"MUCHAS GRACIAS"<<endl;
		}
	}
	return 0;
}
