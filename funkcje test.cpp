#include <iostream>

using namespace std;

float km;

float ile_mil(float m)
{
	return m=m*0.62;
}

float ile_mil_m(float m_m)
{
	return m_m=m_m*0.54;
}

void ile_jardow(float j)
{
	cout<<"na jardy: "<<j*1093.6;
}

int main(){
	
	cout<<"Podaj ile kilometrow: ";
	cin>>km;
	cout<<"na mile: "<<ile_mil(km)<<endl;
	cout<<"na mile morskie: "<<ile_mil_m(km)<<endl;
	ile_jardow(km);
	
	return 0;
}
