#include <iostream>

using namespace std;

int tab[], r;

int main()
{
	cout << "Podaj ilosc elementow tablicy: ";
	cin >> r;
	int* tab = new int[r];

	for (int i = 0; i < r; i++)
	{
		cout << "Podaj element nr. " << i + 1 << ":";
		cin >> tab[i];
	}

	for (int i = 0; i < r - 1; i++)
	{
		for (int j = 0; j < r - 1; j++)
		{
			if (tab[j] > tab[j + 1])
			{
				swap(tab[j], tab[j + 1]); //zamiana s¹siednich elementów jeœli s¹ w z³ej kolejnoœci
			}
		}
	}
	cout << "Posortowana tablica: ";
	for (int i = 0; i < r; i++)
	{
		cout << tab[i] << " ";
	}

	delete[] tab;

	return 0;
}
