#include <iostream>
using namespace std;

int main(){
    char nombre[20];
    char apellidomaterno[20];
    string apellidopaterno;
    cout<<"Ingrese su nombre: ";
    cin>>nombre;
    cout<<"Ingrese su apellido paterno: ";
    cin>>apellidopaterno;
    cout<<"Ingrese su apellido materno: ";
    cin>>apellidomaterno;
    cout<<"Correo Unsa: "<<nombre[0]+apellidopaterno+apellidomaterno[0]<<"@unsa.edu.pe";
    return 0;
}
