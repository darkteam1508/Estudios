#include<iostream>

using namespace std;

int main(){
	int numero;
	
	cout<<"Digite un numero: "; cin>>numero;
	
	if(numero == 0){
		cout<<"\nEl numero es cero"<<endl;
	}
	else if(numero>0){
		cout<<"\nEl numero es positivo";
	}
	else{
		cout<<"\nEl numero es negativo";
	}
	
	return 0;
}
