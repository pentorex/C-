#include <iostream>
#include <cmath>

using namespace std;

int a;
int b;
int c;
int delta;
int x1;
int x2;

int main() {
cout<<"Podaj pierwszy wspolczynnik"<<endl;
cin>>a;
cout<<"Podaj drugi wspolczynnik"<<endl;
cin>>b;
cout<<"Podaj trzeci wspolczynnik"<<endl;
cin>>c;

delta=b*b-4*a*c;

if(delta>0)
{
	b = -b;
	a=2*a;
	x1 = b-sqrt(delta);
	x1 = x1/a;
	x2 = b+sqrt(delta);
	x2 = x2/a;
	cout<<"Pierwiastkami sa: "<<x1<<" "<<x2;
}
else 
{
	cout<<"Nie ma pierwiastkow w tym rownaniu";
}
  return 0;
}
