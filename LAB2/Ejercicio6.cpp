#include <iostream>
using namespace std;

int main(){
  int a=1,fib=0,b;
  cout<<"Ingrese el numero de digitos que desea mostrar en la sucesion de Fibonnaci: ";
  cin>>b;
  for(int i=1;i<=b;i++){
    cout<<fib<<" ";
    a=a+fib;
    fib=a-fib;
  }
}
