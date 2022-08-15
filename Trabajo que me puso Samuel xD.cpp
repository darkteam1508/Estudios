#include<iostream>

using namespace std;

int main(){
	int sueldo = 3000;
	
	cout<<"digite su sueldo: "; cin>>sueldo;
	
	if(sueldo <= 3000){
		cout<<"Su sueldo es correcto, gracias";
	}
	else{
		cout<<"debe de pagar impuestos";
	}
	
	
	
	return 0;
}
