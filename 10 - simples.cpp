//Velocidad de un proyectil
#include <iostream>
using namespace std;

int main()
{
	
	float t,km;
	float velocidad;
	cout<<"Ingrese la distancia recorrida en km y el tiempo en minutos para calcular la velocidad del proyectil \n\n";

	
	do {
		cout<<"Distancia en km?\n";
		cin>>km;
		if (km<0)
		cout<<"Ingrese un numero positivo \n";
		
	} while (km<0);
	
	do {
		cout<<"Tiempo en minutos?\n";
		cin>>t;
		if (t<0)
		cout<<"Ingrese un numero positivo \n";
	} while (t<0);
	
	velocidad=km/t;
	cout<<"La velocidad del proyectil es: "<<velocidad<<" m/s \n\n";
	
	system ("PAUSE");
	return 0;
}
