#include <iostream>
#include <fstream>

using namespace std;

int a, b, c;

int main() {

	fstream plik;
	plik.open("macierz.txt", ios::in | ios::app);
	if (plik.is_open()) //sprawdzenie czy plik zostal otwarty
	{
		plik >> a; //wczytanie liczby wierszy
		plik >> b; //wczytanie liczby kolumn
		cout << "Rozmiary macierzy: " << b << " x " << a << endl;
		int** tab = new int* [a];
		for (int i = 0; i < a; i++)
		{
			tab[i] = new int[b];
		}
		for (int i = 0; i < a; i++)
		{
			for (int j = 0; j < b; j++)
			{
				plik >> c; //wczytywanie kolejnych znakow do tablicy
				tab[i][j] = c;
			}
		}
		for (int i = 0; i < a; i++)
		{
			for (int j = 0; j < b; j++)
			{
				cout << tab[i][j] << " ";
			}
			cout << endl;
		}
		for (int i = 0; i < a; i++)
		{
			delete[] tab[i];
		}
	}
	else
	{
		cout << "Otwarcie pliku zakonczone niepowodzeniem!" << endl;
	}

	return 0;
}
