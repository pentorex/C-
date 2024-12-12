#include <iostream>
#include <stdlib.h>

using namespace std;

string login="admin";
string login2;
string haslo="admin";
string haslo2;
int proby=3;

int main ()
{
	start:
	if(proby>0)
{
	cout<<"Podaj login"<<endl;
	cin>>login2;
	cout<<"Podaj haslo"<<endl;
	cin>>haslo2;
	if(login2==login && haslo2==haslo)
	{
		system ("CLS");
		cout<<"Zalogowano"<<endl;
	}
	else 
	{
		system ("CLS");
		cout<<"Niepoprawny login lub haslo. Pozostale proby do zablokowania dostepu: "<<proby-1<<endl;
		proby-=1;
		goto start;
	}
}
else
{
	system ("CLS");
	cout<<"Zablokowano dostep!";
}
	return 0;
}
