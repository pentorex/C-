#include <iostream>

using namespace std;

float srednia(float *tab, int ile) 
{
	float suma = 0;
	for (int i = 0; i < ile; i++)
	{
		suma += *tab;
		tab++;
	}
	return suma / ile;
}

int main() {

	float tablica[4];
	cout << "Podaj 4 liczby do tablicy:" << endl;
	for (int i = 0; i < 4; i++)
	{
		cin >> tablica[i];
	}
	cout << "Srednia wynosi: " << srednia(tablica, 4);
	
	return 0;
}
