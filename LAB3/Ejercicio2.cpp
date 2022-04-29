#include <iostream> 
using namespace std;

int bisiesto(int x){
	if(x%4==0 and x%100!=0 or x%400==0){
		return 1;
	}
	else{
		return 0;
	}
}

int main(){
	int a,r;
	cout<<"Ingrese un año: ";
	cin>>a;
	r=bisiesto(a);
	if(r==1){
		cout<<"El año es bisiesto";
	}	
	else{
		cout<<"El año no es bisiesto";
	}
	return 0;
} 
