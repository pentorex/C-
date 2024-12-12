#include <iostream>

using namespace std;

int bok;

int main () {
	
	cout<<"Podaj liczbe bokow: "<<endl;
	cin>>bok;
	for (int i=1;i<=bok;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<"*";	
		}
		cout<<endl;
	}
	for (int i=bok-1;i>=1;i--)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<"*";	
		}
		cout<<endl;
	}
	return 0;
}
