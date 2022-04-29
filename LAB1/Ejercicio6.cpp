#include <iostream>
#include <string>
using namespace std;

int main(){
    int numero=15;
    cout<<"El numero es: "<<numero<<endl;
    cout<<"Su binario seria : "<binario(numero)<<endl;
    return 0;
}

string binario(int numero){
    string b;
    while(numero!=0){
        b+=(numero%2==0?"0":"1");
        numero/=2;
    }
    return b;
}

