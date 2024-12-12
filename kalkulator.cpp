#include <iostream>
using namespace std;

int main(){

int a;
int b;
int c=1;
int wybor;

cout<<"Podaj liczbe a"<<endl;
cin>>a;
cout<<"Podaj liczbe b"<<endl;
cin>>b;
cout<<"Jakie dzialanie chcesz wykonaæ?  \n 1 - dodawanie  \n 2 - odejmowanie \n 3 - mnozenie \n 4- dzielenie \n 5 - potegowanie"<<endl;
cin>>wybor;
if(wybor==1){
	c=a+b;
}
if(wybor==2){
	c=a-b;
}
if(wybor==3){
	c=a*b;
}
if(wybor==4){
	c=a/b;
}
if(wybor==5){
	for(int i=0; i<b; i++)
	{
		c*=a;
	}	
}
cout<<"Wynik to: "<<c<<endl;
return 0;
}
