#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout<<"Introduce el primer numero: ";
    cin>>a;
    cout<<"Introduce el segundo numero: ";
    cin>>b;
    if((a%b)&&(b!=0)){
    	cout<<a<<" es divisor de "<<b;
	}
	else{
		cout<<a<<" no es divisor de "<<b;
	}
    return 0;
}
