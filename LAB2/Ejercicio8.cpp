#include <iostream>
using namespace std;

int main(){
	int a;
	cout<<"Ingrese el numero del que desee saber la tabla de multiplicar: ";
  	cin>>a;
  	for(int i=0;i<=100;i++){
  		cout<<a<<" por "<<i<<" es "<<a*i<<endl;
	}
}
