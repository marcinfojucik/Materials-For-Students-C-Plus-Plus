
#include <iostream>
#include <string>
using namespace std;
int main ()
{
	string imie;
	string nazwisko;
	cout << "Prosze Podac swoje imie: ";
	cin >> imie;
	cout << "Prosze podac swoje nazwisko: ";
	cin >> nazwisko;
	string pelne_dane = imie + " " + nazwisko;
	cout << "Nazwyasz sie: " << pelne_dane << "\n";
	system ("pause");
}
