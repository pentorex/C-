#include <iostream>

using namespace std;

int liczba;
int tablica[100];

int main ()
{
	cout<<"Podaj liczbe do zamiany"<<endl;
	cin>>liczba;
	int index=0;
		for(int i=0;liczba!=0;i++)
		{
			if(liczba%2==1)
			{
				tablica[index]=liczba%2;
				liczba-=1;
				liczba/=2;
				index++;
			}
			else 
			{
				tablica[index]=liczba%2;
				liczba/=2;
				index++;
			}
			if(liczba==0)
			{				
                break;
			}
			
		}
		cout<<"Twoja liczba w systemie binarnym to: "<<endl;
		
		for(int j=index-1;j>=0;j--)
		{
			cout<<tablica[j];
		}
	return 0;
}
