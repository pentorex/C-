#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int ilosc;
int liczba;

int main ()
{
	cout<<"Podaj liczbe losowan: ";
	cin>>ilosc;
	srand(time(NULL));
	cout<<"Wylosowano: ";
	for(int i=1;i<=ilosc;i++)
	{
	liczba=(rand()%6)+1;
	cout<<liczba<<" ";
	}
	return 0;
}
