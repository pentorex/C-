#include <iostream>
#include <string>

using namespace std;

int ilosc;
string zdanie, zdania;

int main(){
	
	cout<<"Podaj ilosc zdan: ";
	cin>>ilosc;
	cin.ignore();
	for(int i=1;i<=ilosc;i++)
	{
		cout<<"Podaj zdanie nr. "<<i<<": ";
		getline(cin,zdanie);
		zdania+=zdanie+". ";
	}
	cout<<"Twoje zdania to: "<<zdania;
	return 0;
}
