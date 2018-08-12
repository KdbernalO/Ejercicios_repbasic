#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
	int radio;
	float PI=3.14;
	cout<<"Longitud y area de una circunferencia \n\n";
	cout<<"Ingrese un valor entero positivo para el radio: \n";
	cin>>radio;
	cout<<"\n";
		
	if (radio<0)
	cout<<"Ingrese un valor entero positivo \n\n";
	else
	cout<<"Area de la circunferencia: "<< PI*pow(radio,2) <<"\n\n"<<"Longitud o diametro de la circunferencia: "<< 2*PI*radio <<"\n\n";
	
	system ("PAUSE");
	return 0;
}
