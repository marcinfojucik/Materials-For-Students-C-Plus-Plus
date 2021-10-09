#include <iostream>
#include <string>
using namespace std;
int main ()
{
	string haslo;
	cout << "Prosze podac haslo: ";
	cin >> haslo;
	while (haslo != "12345")
	{
		cout << "Niepoprawne haslo-sprobuj ponownie: ";
		cin >> haslo;
	}
	system("pause");
}
