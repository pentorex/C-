#include <iostream>
#include <cstdlib>

using namespace std;

int nr;

int main(){
	start:
	cout<<"Podaj nr miesiaca: "<<endl;
	
	if(!(cin>>nr))
	{
		cerr<<"To nie jest liczba!";
		exit(0);
	}
	
	switch(nr)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			{
				system("cls");
				cout<<"Ten miesiac ma 31 dni!"<<endl;
				goto start;
			}
		break;
		case 4:
		case 6:
		case 9:
		case 11:
			{
				system("cls");
				cout<<"Ten miesiac ma 30 dni!"<<endl;
				goto start;
			}
		break;
		case 2:
			{
				int rok;
				cout<<"Podaj rok: "<<endl;
				cin>>rok;
				if(rok%4==0)
				{
					system("cls");
					cout<<"Ten miesiac ma 29 dni!"<<endl;
					goto start;
				}
				else
				{
					system("cls");
					cout<<"Ten miesiac ma 28 dni!"<<endl;
					goto start;
				}
			}
		default: 
		{
			system("cls");
			cout<<"Nie ma takiego miesiaca!"<<endl;
			goto start;
		}
	}
	return 0;
}
