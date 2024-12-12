using namespace std;
#include <iostream>

int rozmiar;

struct czlowiek //utworzenie struktury cz�owiek ze sk�adowymi imie, nazwisko i wiek
{
    string imie;
    string nazwisko;
    int wiek;
};

int main()
{
    cout << "Ile chcesz wpisac osob: ";
    cin >> rozmiar;
    czlowiek* osoba = new czlowiek[rozmiar]; // deklaracja tablicy dynamicznej
    for (int i = 0; i < rozmiar; i++) {
        cout << "Podaj dane osoby nr. " << i + 1 << endl;
        cout << "Imie: ";
        cin >> osoba[i].imie; //przypisanie warto�ci do sk�adowej imie dla i osoby
        cout << "Nazwisko: ";
        cin >> osoba[i].nazwisko; //przypisanie warto�ci do sk�adowej nazwisko dla i osoby
        cout << "Wiek: ";
        cin >> osoba[i].wiek; //przypisanie warto�ci do sk�adowej dla i osoby
    }

    for (int i = 0; i < rozmiar; i++) { //wypisanie danych zawawrtych w strukturze
        cout << "Osoba nr. " << i + 1 << ": " << osoba[i].imie << " " << osoba[i].nazwisko << " " << osoba[i].wiek << endl;
    }
}

