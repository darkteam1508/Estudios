#include<iostream>
#include<math.h>

using namespace std;

int main(){
	float cateto1,cateto2,hipotenusa;
	
	cout<<"digite el cateto 1: ";
	cin>>cateto1;
	cout<<"digite el cateto 2: "; 
	cin>>cateto2;
	
	hipotenusa = sqrt(pow(cateto1,2)+pow(cateto2,2));
	
	cout.precision(2); 
	
	cout<<"\nLa hipotenusa del triangulo es: "<<hipotenusa<<endl;
	
	
	return 0;
}
