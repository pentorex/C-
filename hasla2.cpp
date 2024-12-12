#include <iostream>
#include <cmath>

using namespace std;

string login;
string haslo;
string loginy[3]={"admin","loger","niger"};
string hasla[3]={"adm","lgr","ngr"};
int dl=sizeof(loginy)/sizeof(loginy[0]);

int main ()
{
	bool zalogowany = false;
	while(!zalogowany)
	{
		cout<<"Podaj login: "<<endl;
		cin>>login;
		cout<<"Podaj haslo: "<<endl;
		cin>>haslo;
		for(int i=0;i<dl;i++)
		{
			if(login==loginy[i]&&haslo==hasla[i])
			{	
				system ("CLS");
				cout<<"Zalogowano!";
				zalogowany=true;
				break;
			}
			if(!zalogowany)
			{
				system ("CLS");
				cout<<"Sprobuj ponownie. Niepoprawny login lub haslo"<<endl;
			}
		}
	}
	return 0;
} 
