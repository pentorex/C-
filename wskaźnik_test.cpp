	#include <iostream>
		
	using namespace std;
	
	int liczba;
	string decyzja;
	
	int main(){
		
		cout<<"Podaj liczbe: ";
		cin>>liczba;
		int * wsk_liczba;
		wsk_liczba = & liczba;
		cout<<"Twoja liczba "<<liczba<<" znajduje sie w komorce pamieci o numerze: "<<wsk_liczba;
		cout<<" Czy chcesz przypisac nowa liczbe do zmiennej wartosc? (Tak/Nie) ";
		cin>>decyzja;
		if(decyzja=="Tak")
		{
			system("cls");
			cout<<"Podaj nowa liczbe: ";
			cin>>*wsk_liczba;
			cout<<"Twoja liczba "<<*wsk_liczba<<" znajduje sie w komorce pamieci o numerze: "<<wsk_liczba;
		}
		else 
		{
			exit(0);
		}
		return 0;
	}
