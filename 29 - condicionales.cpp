#include <iostream>
using namespace std;

int main()
{
	char letra;
	cout<<"Digite una letra minuscula \n";
	cin>>letra;
	
	switch (letra)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':cout<<"Es una vocal\n";break;
		default: cout<<"No es una vocal\n";break;
	}
	
	system ("PAUSE");
	return 0;
}
