#include<iostream>

using namespace std;

int main(){
	
	float practica,teorica,participacion,nota_final = 0;
	
	cout<<"digite la nota de practica: ";
	cin>>practica;
	cout<<"digite la nota teorica: ";
	cin>>teorica;
	cout<<"digite la nota de participacion: ";
	cin>>participacion;
	
	practica = practica * 0.30;
	teorica= teorica * 0.60;
	participacion = participacion * 0.10;
	
	nota_final = practica + teorica + participacion;
	
	cout<<"\nLa nota final es: "<<nota_final<<endl; 
	
	
	return 0;
}
