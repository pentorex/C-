#include <iostream>

using namespace std;

int r1, r2;

int main()
{
	srand(time(NULL));
	cout << "Podaj wymiary Matrixa. Podaj y: ";
	cin >> r1;
	cout << "Podaj x: ";
	cin >> r2;

	int** tab = new int* [r1];
	for (int i = 0; i < r1; i++)
	{
		tab[i] = new int[r2];
	}
	for (int i = 0; i < r1; i++)
	{
		for (int j = 0; j < r2; j++)
		{
			tab[i][j]=rand() % 100;
		}
	}
	for (int i = 0; i < r1; i++)
	{
		for (int j = 0; j < r2; j++)
		{
			cout<<tab[i][j]<<" ";
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
