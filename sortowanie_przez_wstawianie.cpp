#include <iostream>

using namespace std;

int r, temp, j;

int main()
{
	cout << "Podaj rozmiar tablicy: ";
	cin >> r;
	int* tab = new int[r];
	for (int i = 0; i < r; i++)
	{
		cout << "Podaj element nr. " << i + 1 << ": ";
		cin >> tab[i];
	}
	
	for (int i = 1; i < r; i++)
	{
		temp = tab[i];
		for (j = i - 1; j >= 0 && tab[j] > temp; j--)
		{
			tab[j + 1] = tab[j];
		}
		tab[j + 1] = temp;
	}
	cout << "Posortowana tablica: ";
	for (int i = 0; i < r; i++)
	{
		cout << tab[i] << " ";
	}
	return 0;
}
