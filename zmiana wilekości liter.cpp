#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string napis;

int main(){
	
	cout<<"Podaj napis do zamiany na male a potem na duze litery: ";
	getline(cin,napis);
	transform(napis.begin(),napis.end(),napis.begin(),::tolower);
	cout<<napis<<endl;
	
	transform(napis.begin(),napis.end(),napis.begin(),::toupper);
	cout<<napis<<endl;
	return 0;
}
