#include <iostream>
#include <ctime>

using namespace std;

int liczba;
int liczba2=1;

int main ()
{
	cin>>liczba;
	for(int i=1;i<=liczba;i++)
	{
		liczba2*=i;
		cout<<liczba2<<endl;
	}
	return 0;
}
