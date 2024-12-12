#include <iostream>
#include <ctime>

using namespace std;

int main() {

	srand(time(NULL));
	int r1, r2, a, b, c;
	cout << "Podaj rozmiar tablicy dwuwymiarowej. \nPodaj ilosc kolumn Matrixa: ";
	cin >> r1;
	cout << "Podaj ilosc wierszy Matrixa: ";
	cin >> r2;
	cout << "Podaj zakres liczb losowych. \nPodaj dolna granice: ";
	cin >> a;
	cout << "Podaj gorna granice: "; 
	cin >> b;
	c = b - a;
	int** tab = new int * [r1];
	for (int i = 0; i < r1; i++)
	{
		tab[i] = new int[r2];
	}
	int w;
	for (int i = 0; i < r1; i++)
	{
		for (int j = 0; j < r2; j++)
		{
			w = rand() % c + a;
			tab[i][j] = w;
		}
	}
	for (int i = 0; i < r1; i++)
	{
		for (int j = 0; j < r2; j++)
		{
			cout << tab[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < r1; i++)
	{
		delete[] tab[i];
	}
	delete[] tab;
	return 0;
}