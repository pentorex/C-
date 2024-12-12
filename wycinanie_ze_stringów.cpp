#include <iostream>
#include <string>

using namespace std;

string napis, fragment;
size_t pozycja;
int rozmiar;

int main(){
	
	cout<<"Podaj napis: ";
	getline(cin,napis);
	cout<<"Podaj fragment, ktory chcesz wyciac: ";
	getline(cin,fragment);
	rozmiar=fragment.length();
	pozycja=napis.find(fragment);
	fragment=napis.substr(pozycja,rozmiar);
	napis.erase(pozycja,rozmiar);
	cout<<fragment<<" "<<napis;
	
	return 0;
}
