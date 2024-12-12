#include <iostream>
#include <conio.h>

using namespace std;

float a, b;
char c;

int main(){
	start:
	cout<<"Podaj pierwsza liczbe: ";
	cin>>a;
	cout<<"Podaj druga liczbe: ";
	cin>>b;
	cout<<endl;
	cout<<"MENU GLOWNE"<<endl;
	cout<<"---------------"<<endl;
	cout<<"1.Dodawanie"<<endl;
	cout<<"2.Odejmowanie"<<endl;
	cout<<"3.Mnozenie"<<endl;
	cout<<"4.Dzielenie"<<endl;
	
	cout<<"Wybierz: ";
	c=getch();
	
	switch(c){
		case '1':
			{
			system ("CLS");
			cout<<"Suma wynosi: "<<a+b<<endl;
			goto start;
		    }
			break;
		case '2':
			{
				system ("CLS");
				cout<<"Roznica wynosi: "<<a-b<<endl;
				goto start;
			}
			break;
		case '3':
			{
				system ("CLS");
				cout<<"Iloczyn wynosi: "<<a*b<<endl;
				goto start;
			}
			break;
		case '4':
			{
				if(b==0)
				{
					cout<<"Nie dzielimy przez 0!!"<<endl;
				}
				system ("CLS");
				cout<<"Iloraz wynosi: "<<a/b<<endl;
				goto start;
			}
			break;	
		default:
		{	
		system ("CLS");  
		cout<<"Takiej opcji nie ma w menu!"<<endl;
		goto start;
		}
	}
	
	return 0;
}
