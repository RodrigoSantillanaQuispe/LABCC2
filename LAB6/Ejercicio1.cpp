#include <iostream> 
using namespace std;

class Rectangulo{
		private:
			float base,altura;
		public:
			Rectangulo(float,float);
			void perimetro();
			void area();
};

Rectangulo::Rectangulo(float x,float y){
	base=x;
	altura=y;
}

void Rectangulo::perimetro(){
	float x;
	x=(2*base)+(2*altura);
	cout<<"El perimetro es "<<x<<endl;
}

void Rectangulo::area(){
	float x;
	x=base*altura;
	cout<<"El area es "<<x<<endl;
}

int main(){
	float a,b;
	cout<<"Ingrese la base: ";
	cin>>a;
	cout<<"Ingrese la altura: ";
	cin>>b;
	cout<<endl;
	Rectangulo r1(a,b);
	r1.area();
	r1.perimetro();
	return 0;
}
