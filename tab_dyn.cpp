#include <iostream>

using namespace std;

int main() {
	int rozmiar;
	cout << "Podaj rozmiar tablicy do zaalokowania: ";
	cin>>rozmiar;
	int* tab = new int[rozmiar]; //alokacja tablicy w pami�ci 
	for (int i = 0; i < rozmiar; i++)
	{
		tab[i] = i+1; //wype�nienie tablicy warto�ciami od 1 do liczby rozmiaru
	}
	cout << "Twoja tablica to:";
	for (int i = 0; i < rozmiar; i++)
	{
		cout << tab[i] << ", "; //wypisanie tablicy na ekranie
	}
	delete[] tab;
	return 0;
}