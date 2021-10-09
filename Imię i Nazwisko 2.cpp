#include <iostream>
#include <string>
using namespace std;
int main ()
{
	string imie;
	string nazwisko;
	string wiek;
	cout << "Prosze Podac swoje imie: ";
	cin >> imie;
	cout << "Prosze podac swoje nazwisko: ";
	cin >> nazwisko;
	cout << "Podaj swoj wiek: ";
	cin >> wiek;
	string pelne_dane = imie + " " + nazwisko + " " + wiek;
	cout << "Nazwyasz sie: " << pelne_dane << "Stary zgredzie" << "\n";
	system ("pause");
}
