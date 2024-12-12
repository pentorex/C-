#include <iostream>
#include <ctime>

using namespace std;

int liczba;
int liczba2;
int potega;

int main ()
{
	cin>>liczba;
	cin>>potega;
	liczba2=liczba;
	if(potega==0)
	{
		cout<<"1";
	}
	else
	{
		for(int i=1;i<potega;i++)
		{
			liczba*=liczba2;
		}
		cout<<liczba;
	}
		return 0;
}
