#include <iostream>
using namespace std;

int main()
{
	int acum=0;
	int n;
	int y;
	
	cout<<"Digite la cantidad de numeros a calcular la media \n";
	cin>>y;
	
	for(int x=0;x<y;x++)
	{
		cout<<"Ingrese el numero "<< x+1 << " de "<<y<<"\n";
		cin>>n;
		acum+=n;
	}
	cout<<"La media de los "<<y<<" numeros ingresados es: "<<acum/y<<"\n";
	system ("PAUSE");
	return 0;
}
