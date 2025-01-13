#include <iostream>
#include <fstream>

using namespace std;

string marka, model, paliwo, skrzynia;
int rocznik, ilosc;


int main()
{
	fstream plik;
	plik.open("samochody.txt", ios::out | ios::app);
	if (plik.is_open())
	{
		cout << "Ile aut chcesz dopisac do pliku? ";
		cin >> ilosc;
		if (ilosc > 0)
		{
			for (int i = 0; i < ilosc; i++)
			{
				cout << "Podaj samochod nr. " << i + 1 << ":\nMarka: ";
				cin >> marka;
				cout << "Model: ";
				cin >> model;
				cout << "Rocznik: ";
				cin >> rocznik;
				cout << "Paliwo (benzyna/diesel/gaz/prad): ";
				cin >> paliwo;
				cout << "Skrzynia (manualna/automatyczna): ";
				cin >> skrzynia;
				plik << endl << marka << " " << model << " " << rocznik << " " << paliwo << " " << skrzynia;
				cout << endl;
			}
			plik.close();
		}
	}
	else
	{
		cout << "Wystepuje problem z otwarciem pliku!";
	}

	plik.open("samochody.txt", ios::in);
	if (plik.is_open())
	{
		cout << "Samochody w pliku: \n";
		while (!plik.eof())
		{
			plik >> marka;
			plik >> model;
			plik >> rocznik;
			plik >> paliwo;
			plik >> skrzynia;
			cout << marka << " " << model << " " << " - " << rocznik << " - " << paliwo <<" - skrzynia " << skrzynia << endl;
		}
	}
	else
	{
		cout << "Wystepuje problem z otwarciem pliku!";
	}

	return 0;
}
