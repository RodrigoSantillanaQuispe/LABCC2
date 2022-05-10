#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;

int main(){
	float V1[1]={};
	float V2[1]={};
	float *d_V1,*d_V2;
	srand(time(NULL));
	for(int j=0;j<1000000;j++){
		for(int i=0;i<1;i++){
		V1[i]=1+rand()%(101-1);
		V2[i]=1+rand()%(101-1);
		}
		d_V1=V1;
		d_V2=V2;
		cout<<endl;
		for(int i=0;i<1;i++){
			cout<<j+1<<". Los numeros generados son "<<*d_V1<<" y "<<*d_V2<<", y el producto es "<<(*d_V1)*(*d_V2)<<"."<<endl;
			V1[i]=0;
			V2[i]=0;
			d_V1=V1;
			d_V2=V2;
		}		
	}
}

