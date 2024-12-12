#include <iostream>

using namespace std;

string imie;
int rozmiar;

int main(){
	
	cout<<"Podaj imie do odwrocenia: ";
	cin>>imie;
	rozmiar=imie.length();
	for(int i=rozmiar;i>=0;i--)
	{
		cout<<imie[i];
	}
		
	return 0;
}
