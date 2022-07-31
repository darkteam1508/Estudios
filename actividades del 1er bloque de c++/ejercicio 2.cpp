//ejercicio 2

#include<iostream>

using namespace std;

int main(){
	
	int precio,iva,precioFinal;
	
	cout<<"digite el precio del producto: ";
	cin>>precio;
	
	iva = precio+0.21;
	
	precioFinal = precio+iva;
	
	cout<<"\nEl precio del producto es: "<<precioFinal<<endl;
	
	return 0;
}
