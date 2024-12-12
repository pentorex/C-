#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

double tab[10];
double minimum;
double losowaLiczba;

int main()
{
	srand(time(NULL));
	for(int i=0;i<=9;i++)
	{
		losowaLiczba = static_cast<double>(rand()) / RAND_MAX;
		tab[i]=losowaLiczba;
		cout<<tab[i]<<" ";
	}
	cout<<endl;
	minimum=tab[0];
	for(int i=0;i<=9;i++)
	{
		if(minimum>tab[i])
		{
			minimum=tab[i];
		}	
	}
	cout<<"Najmniejsza z wylosowanych to: "<<minimum;
	return 0;
}
