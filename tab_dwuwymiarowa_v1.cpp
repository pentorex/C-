#include <iostream>
#include <string>
using namespace std;

int main() {
	int r1, r2;
	cout << "Podaj rozmiar tablicy dwuwymiarowej. \n Podaj ilosc kolumn: ";
	cin >> r1;
	cout << "Podaj ilosc wierszy: ";
	cin >> r2;
	string** tab = new string * [r1];
	for(int i=0;i<r1;i++)
	{
		tab[i] = new string[r2];
	}
	string w, w1, w2;
	for (int i = 0; i < r1; i++)
	{
		for (int j = 0; j < r2; j++)
		{
			w = "";
			w1 = to_string(i+1);
			w2 = to_string(j+1);
			w = "[" + w1 + "]" + "[" + w2 + "]";
			tab[i][j] = w;
		}
	}
	for (int i = 0; i < r1; i++)
	{
		for (int j = 0; j < r2; j++)
		{
			cout<<tab[i][j]<<" ";
		}
		cout<<endl;
	}
	for (int i = 0; i < r1; i++)
	{
		delete[] tab[i];
	}
	delete[] tab;
	return 0;
}