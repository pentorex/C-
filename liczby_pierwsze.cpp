#include <iostream>
#include <cmath>

using namespace std;

int a;

int main()
{
	cout<<"Podaj liczbe do sprawdzenia"<<endl;
	cin>>a;
	for(int i=a-1;i>=2;i--)
	{
		if(a%i==0)
		{
			cout<<"Liczba ta nie jest liczba pierwsza"<<endl;
			return 0;
		}
	}
	cout<<"Liczba ta jest liczba pierwsza"<<endl;
	return 0;
}
