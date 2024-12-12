#include <iostream>

using namespace std;

double dodawanie(double a, double b)
{
	return a+b;
}

double odejmowanie(double a, double b)
{
	return a-b;
}

double mnozenie(double a, double b)
{
	return a*b;
}

double dzielenie(double a, double b)
{
	return a/b;
}

int main(){
	
	double liczba1, liczba2;
	int wybor;
	cout<<"Witaj w kalkulatorze"<<endl<<"---------------------------------"<<endl;;
	cout<<"Podaj pierwsza liczbe: ";
	cin>>liczba1;
	cout<<"Podaj druga liczbe: ";
	cin>>liczba2;
	cout<<"Jakie dzialanie chcesz wykonac? \n 1.Dodawanie \n 2.Odejmowanie \n 3.Mnozenie \n 4.Dzielenie \n Twoj wybor: ";
	cin>>wybor;
	switch(wybor){
		case 1:
		{
			cout<<"Twoj wynik dodawania: "<<dodawanie(liczba1,liczba2);
		}
		case 2:
		{
			cout<<"Twoj wynik odejmowania: "<<odejmowanie(liczba1,liczba2);
		}
		case 3:
		{
			cout<<"Twoj wynik mnozenia: "<<mnozenie(liczba1,liczba2);
		}
		case 4:
		{
			cout<<"Twoj wynik dzielenia: "<<dzielenie(liczba1,liczba2);
		}
	}
	return 0;
}
