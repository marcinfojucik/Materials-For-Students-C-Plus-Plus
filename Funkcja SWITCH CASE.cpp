#include <iostream>
using namespace std;
void graj ()
{}
void wczytaj ()
{}
void multiplayer()
{}
int main ()
{
	int wybor;
	cout << "1. Graj\n";
	cout << "2. Wczytaj stan gry\n";
	cout << "3. Tryb multiplayer\n";
	cout << "4. Koniec\n";
	cout << "Wybierz: ";
	cin >> wybor;
	switch (wybor)
	{
		case 1: //Zwr�c uwag� na dwukropek po instrukcjach case - nie ma �rednika!
			graj();
			break;
		case 2:
			wczytaj();
			break;
		case 3:
			multiplayer();
			break;
		case 4:
			cout << "Dziekuje za gre!\n";
			break;
		default: //Zwr�� uwag� na dwukropek po default - nie ma tu �rednika!
		cout << "Niepoprawny wybor. Wyjscie z programu.\n";
		break;
	}
	system ("pause");
}
