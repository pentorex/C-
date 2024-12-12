#include <iostream>
#include <cstring>
#include <string>

using namespace std;

string tekst;
string szyfrogram;
string l1;
string l2;
int dlugosc;

int main()
{
	cout<<"Podaj tekst do zaszyfrowania"<<endl;
	cin>>tekst;
	system ("CLS");
	cout<<"Tekst przed zaszyfrowaniem: "<<tekst<<endl;
	dlugosc=tekst.length();
	for(int i=0;i<dlugosc-1;i+=2)
	{
		l1=tekst[i];
		l2=tekst[i+1];
		tekst.replace(i,1,l2);
		tekst.replace(i+1,1,l1);	
	}
	cout<<tekst<<endl;
	return 0;
}
