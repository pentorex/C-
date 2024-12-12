#include <iostream>

using namespace std;

float a, b;
int c;

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
	cin>>c;
	
	switch(c){
		case 1:
				cout<<"Suma wynosi: "<<a+b;
			break;
		case 2:
				cout<<"Roznica wynosi: "<<a-b;
			break;
		case 3:
				cout<<"Iloczyn wynosi: "<<a*b;
			break;
		case 4:
				cout<<"Iloraz wynosi: "<<a/b;
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
