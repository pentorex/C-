#include <iostream>
#include <string>

using namespace std;

string napis, fragment;
size_t pozycja;

int main(){
	
	cout<<"Podaj napis do przeszukania: ";
	getline(cin,napis);
	cout<<"Podaj fragment do odnalezienia: ";
	getline(cin,fragment);

	pozycja=napis.find(fragment);
	
	if(pozycja!=string::npos)
	{
		cout<<"Znaleziono na pozycji: "<<pozycja;
	}
	else
	{
		cout<<"Nie znaleziono podanego fragmentu w podanym wyrazie!";
	}
	return 0;
}
