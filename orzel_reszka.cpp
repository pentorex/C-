#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int ilosc;
int liczba;
string wartosc;

int main ()
{
	cout<<"Podaj liczbe losowan: ";
	cin>>ilosc;
	srand(time(NULL));
	cout<<"Wylosowano: ";
	for(int i=1;i<=ilosc;i++)
	{
	liczba=(rand()%2)+1;
	if(liczba==1)
	{
		wartosc="ORZEL";
	}
	else 
	{
		wartosc="RESZKA";
	}
		cout<<wartosc<<" ";
	}
	return 0;
}
