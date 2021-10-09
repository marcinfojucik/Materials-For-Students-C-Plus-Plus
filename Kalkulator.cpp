#include <iostream>
#include <string>
using namespace std;
int main ()
{
int Liczba1;
int Liczba2;
    cout << "Podaj pierwsza liczbe: ";
    cin >> Liczba1;
    cout << "Podaj druga liczbe: ";
    cin >> Liczba2;
    cout << Liczba1 << "+" << Liczba2 << "=" << Liczba1 + Liczba2;
    cout << Liczba1 << "-" << Liczba2 << "=" << Liczba1 - Liczba2;
    cout << Liczba1 << "*" << Liczba2 << "=" << Liczba1 * Liczba2;
    cout << Liczba1 << "/" << Liczba2 << "=" << Liczba1 / Liczba2;
    cin.get();
    system("pause");
}
