#include <iostream>
#include <ctime>

using namespace std;

int liczba;
int roznica;
int roznica2;
int ilosc;

int main ()
{
	cout<<"Podaj pierwszy element ciagu:"<<endl;
	cin>>liczba;
	cout<<"Podaj roznice, ktora sie bedzie zwielokratniac:"<<endl;
	cin>>roznica;
	cout<<"Podaj ilosc wyrazow ciagu:"<<endl<<endl;
	cin>>ilosc;
	roznica2=roznica;
	for(int i=0; i<=ilosc; i++)
	{
		cout<<liczba<<endl;
		liczba=liczba+roznica;
		roznica+=roznica2;
	}
	return 0;
}
