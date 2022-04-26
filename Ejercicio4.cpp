#include <iostream> 
using namespace std;

int main(){
	int a,b;
	cout<<"Ingrese 2 numero, el primero menor al segundo"<<endl;
	cout<<"Ingrese el primero numero: ";
	cin>>a;
	cout<<"Ingrese el segundo numero: ";
	cin>>b;
	int sum=1,t=0;
	while(a<b){
		for(int i=1;i<=a;i++){
			if(a%i==0){
				t++;
			}
		}
		if(t==2){
			cout<<sum<<". El numero "<<a<<" es primo"<<endl;
			sum++;
		}
		t=0;
		a++;
	}
}
