#include <iostream>

using namespace std;

string imie;
int rozmiar;

int main(){
	
	cout<<"Podaj imie: "; 
	cin>>imie;
	rozmiar=imie.length()-1;
	if(imie[rozmiar]=='a' || imie[rozmiar]=='A' )
	{
		cout<<"Jest to imie zenskie";
	}
	else 
	{
		cout<<"Jest to imie meskie";
	}
	return 0;
}
