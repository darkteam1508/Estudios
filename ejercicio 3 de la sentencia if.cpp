#include <iostream> 
using namespace std; 

int main () 
{
        int x, monto = 0;
 cout<<"Ingrese los datos de la compra"<<endl;
 cout<<"Zapatos comprados: ";
 cin>> x;
 monto = x * 80;

 if (x < 10)
 {
  cout<<"El monto total a pagar es: "<<monto;
 }
 else if (x < 20)
 {
  cout<<"El monto total a pagar es: "<<monto - (monto * 0.10);
 
 }
 else if (x < 30)
 {
 cout<<"El monto total a pagar es: "<<monto - (monto * 0.20);
   
 }
 else
 {
  cout<<"El monto total a pagar es: "<<monto - (monto * 0.40);
  
 }

 return 0;
}
