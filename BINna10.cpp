#include <iostream>
#include <cmath> 

using namespace std;

string liczba;
int dlugosc;
int liczba2;
int liczba3;
int liczba4=0;

int main()	{
	
	cout<<"Podaj liczbe do zamiany"<<endl;
	cin>>liczba;
	dlugosc=liczba.length();
	dlugosc-=1;
	for(int i=0;i<=dlugosc;i++)
	{
		if(liczba[dlugosc-i]=='1')
		{
			liczba4+=pow(2,i);	
		}
	}
	cout<<liczba4;
	return 0;
}
