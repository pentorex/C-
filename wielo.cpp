#include <iostream>
#include <ctime>

using namespace std;

int liczba;
int liczba2;
int ilosc;

int main ()
{
	cout<<"Podaj liczbe do zwielokrotnienia"<<endl;
	cin>>liczba;
	liczba2 = liczba;
	cout<<"Podaj ilosc zwielokrotnien"<<endl;
	cin>>ilosc;
	for (int i=0;i<=ilosc;i++)
	{
		cout<<liczba<<endl;
		liczba=liczba+liczba2;
	}
	return 0;
}
