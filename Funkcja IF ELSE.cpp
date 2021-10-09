#include <iostream>
#include <string>
using namespace std;
int main ()
{
	int liczba;
	cout << "Podaj liczbe: ";
	cin >> liczba;
	if (liczba < 0)
	{
		cout << "Twoja liczba jest ujemna\n";
	}
	else if (liczba == 0)
	{
		cout << "Twoja liczba to zero\n";
	}
	else
	{
		cout << "Twoja liczba jest dodatnia";
	}
	system ("pause");
}
