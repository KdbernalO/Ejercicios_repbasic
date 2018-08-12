#include <iostream>
using namespace std;

int main()
{
	int num;
	
	do
	{
		cout<<"Digite un numero: \n";
		cin>>num;
		if(num<=0)
		cout<<"Ingrese un valor entero mayor a cero \n";
	}while(num<=0);
	
	if(num%2==0)
	cout<<"Es par \n";
	else
	cout<<"Es impar \n";
	
	system ("PAUSE");
	return 0;
}
