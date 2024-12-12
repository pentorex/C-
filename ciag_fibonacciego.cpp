#include <iostream>
#include <cmath>

using namespace std;

int tab[100]={0,1};
int n;

int main()
{
	cout<<"Podaj n-ty wyraz ciagu: "<<endl;
	cin>>n;
	for(int i=2;i<=n;i++)
	{
		tab[i]=tab[i-1]+tab[i-2];
		cout<<tab[i]<<" ";
	}
	return 0;
}
