#include <iostream>
#include <fstream>

using namespace std;

string imie, nazwisko;

int main() {

	fstream plik;
	plik.open("plik.txt", ios::out | ios::app);
	if (plik.is_open()) //sprawdzenie czy plik zostal otwarty
	{
		cout << "Plik zostal otwarty!" << endl;
		cout << "Podaj imie: "; cin >> imie;
		cout << "Podaj nazwisko: "; cin >> nazwisko;
		plik << imie << " " << nazwisko << endl; //przekazanie zmiennych do pliku 
		plik.close(); //zamkniecie pliku
		cout << "Pomyslnie dodano dane do pliku!";
	}
	else
	{
		cout << "Otwarcie pliku zakonczone niepowodzeniem!" << endl;
	}

	return 0;
}