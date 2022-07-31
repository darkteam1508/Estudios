//entrada y salida de datos

#include<iostream>

/*
el #include<iostream> es una libreria
el using namespace std sirve para que en cualquier texto que quieras imprimir no pongas std::cout<<"hola mundo :D";
el retur 0; sirve para decirle al programa que terminaste correctamente
una de las funciones principales que se debe de ocupar si o si es el int main() en las {} puedes poner todo el codigo que querramos
*/
using namespace std;

int main (){ 

    cout<<"Hola Mundo :D"<<endl;

    return 0;
}


//datos basicos de c++

#include<iostream> 

using namespace std;

/*
int = entero osea todo numero que no tenga ninguna , o . 
float = es un flotante osea que lleva un .
double = mayor osea puedes poner 1.2131 porque puedes poner un numero mayor siempre y cuando no arrebase los 4 numeros despues de el .
char = letra osea que puedes poner cualquier letra del abecedario por ejemplo    char letra = 'a' 
*/

 
int main (){
	int entero = 20;
	float flotante = 12.41;
	double mayor = 3.1416;
	char letra = 's';
	
	cout <<mayor<<endl;
	cout <<flotante<<endl;
	cout <<entero<<endl;
	cout <<letra<<endl;
	
	return 0;
	
}


//lectura o entrada de datos

/*
cin es para guardar algun codigo
\nEL es para dar un salto de linea al igual que Endl


*/

#include<iostream>

using namespace std;


int main (){
	int numero;
	
	cout<<"digite un numero: ";
	cin >>numero;
	
	cout<<"\nEL numero que digito es: "<<numero;
	
	return 0;
}

//ejercicio 1

#include<iostream>

using namespace std;

int main(){
	
	int n1, n2, suma = 0, resta = 0, multiplicacion =0, divicion =0;
	
	cout<<"digite un numero: "; cin>>n1;
	cout<<"digite otro numero: "; cin>>n2;
	
	suma = n1 + n2;
	resta = n1 - n2;
	multiplicacion = n1 * n2;
	divicion = n1 / n2;
	
	cout<<"la suma es: "<<suma<<endl;
	cout<<"la resta es: "<<resta<<endl;
	cout<<"la multiplicacion es: "<<multiplicacion<<endl;
	cout<<"la divicion es: "<<divicion<<endl;	
	
	
	return 0;
}

//ejercicio 2

#include<iostream>

using namespace std;

int main(){
	float precio, iva, precioFinal;
	
	cout<<"digite el percio del producto: ";
	cin>>precio;
	
	iva = precio*0.24;
	
	precioFinal = precio+iva;
	
	cout<<"\nEl precio final es:"<<precioFinal<<endl;
	
	
	
	return 0; 
}

//ejercicio 3

#include<iostream>

using namespace std;

int main(){
	
	int edad;
	char sexo[10];
	float altura;
	
	cout<<"digite su edad: ";
	cin>>edad;
	
	cout<<"digite su sexo: ";
	cin>>sexo;
	
	cout<<"digite su altura en metros: ";
	cin>>altura;       
	
	cout<<"\nEdad: "<<edad<<endl;
	cout<<"Sexo: "<<sexo<<endl;
	cout<<"Altura en metros: "<<altura<<endl;
	
	
	return 0;
}

//ejercicio 3

#include<iostream>

using namespace std;

int main(){
	
	int edad;
	char sexo [10];
	float altura;
	
	cout<<"digite su edad: ";
	cin>>edad;
	
	cout<<"digite su sexo: ";
	cin>>sexo;
	
	cout<<"digite su altura en metros: ";	
	cin>>altura;
	
	cout<<"\nEdad: "<<edad<<endl;
	cout<<"Sexo: "<<sexo<<endl;
	cout<<"altura en metros: "<<altura<<endl;
	
	return 0;
}


