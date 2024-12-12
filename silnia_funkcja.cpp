#include <iostream>
#include <cmath>

using namespace std;

int liczba;

void silnia(int silnia)
{
	int wynik=1;
	for(int i=1;i<=silnia;i++)
	{
		wynik*=i;
	}
	cout<<wynik;
}

int main()
{
	cout<<"Podaj silnie: "<<endl<<"!";
	cin>>liczba;
	silnia(liczba);
	return 0;
}
