#include <iostream>
#include <fstream>

using namespace std;

string produkt;
float ilosc, cena, koszt;

int main() {

	fstream plik;
	plik.open("produkty.txt", ios::in | ios::app);
	if (plik.is_open()) //sprawdzenie czy plik zostal otwarty
	{
		while (!plik.eof())
		{
			plik >> produkt;
			plik >> ilosc;
			plik >> cena;
			cout << "Produkt: "<<produkt << " | Ilosc: " << ilosc << " | Cena: " << cena << endl;
			koszt = cena * ilosc + koszt;
		}
		cout << "Calkowity koszt zakupow wynosi: " << koszt << " zl";
	}
	else
	{
		cout << "Otwarcie pliku zakonczone niepowodzeniem!" << endl;
	}

	return 0;
}