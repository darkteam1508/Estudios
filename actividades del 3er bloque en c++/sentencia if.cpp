#include<iostream>

using namespace std;

int main(){
	int edad, cantidadCigarros = 5;
	
	cout<<"Digite su edad: "; cin>>edad;

	if(edad >= 18 ){
		cout<<"\nUsted es mayo de Edad"<<endl;
		if(cantidadCigarros > 0 ){
		cout<<"\nEs tanto"<<endl;
		}
		else{
			cout<<"\nNo hay cigarros"<<endl;
		}
	
	}
	else{
		cout<<"\nUsted es menor de edad"<<endl;
	}

	return 0;
	}
