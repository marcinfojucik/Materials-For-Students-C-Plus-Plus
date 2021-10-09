#include <iostream>
#include <string>
using namespace std;
int main ()
{
	string haslo;
	do
	{
		if (haslo == "")
		{
			cout << "Podaj haslo: ";
			
		}
		else
		{
			cout << "Niepoprawne halo - sporboj ponownie: ";
		}
		cin >> haslo;
	}while (haslo != "12345");
	system("pause");
}
