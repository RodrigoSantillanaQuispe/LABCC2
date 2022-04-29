#include <iostream> 
using namespace std;

int main(){
	int num=1,sum=1,t=0;
	while(sum<51){
		for(int i=1;i<=num;i++){
			if(num%i==0){
				t++;
			}
		}
		if(t==2){
			cout<<sum<<". El numero "<<num<<" es primo"<<endl;
			sum++;
		}
		t=0;
		num++;
	}
	return 0;			
}
