#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int tab[3];
int a;
int b;
int c;

int main()
{
	cout<<"Podaj pierwsza liczbe:"<<endl;
	cin>>tab[0];
	cout<<"Podaj druga liczbe:"<<endl;
	cin>>tab[1];
	cout<<"Podaj trzecia liczbe:"<<endl;
	cin>>tab[2];
	sort(tab,tab+3);
	a=tab[0];
	b=tab[1];
	c=tab[2];
	if(a*a+b*b==c*c)
	{
		cout<<"Liczby stanowia trojke pitagorejska"<<endl;
	}
	else
	{
		cout<<"To nie jest trojka pitagorejska"<<endl;
	}
	return 0;
}
