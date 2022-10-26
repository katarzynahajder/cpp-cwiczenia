#include <iostream>
using namespace std;
int main() 
{
	float a, b, pole=0;
	float *dlu=&a, *sze=&b;
	for(int i=0; i<2; i++)
	{
		cout<<"Podaj dlugosc pokoju nr."<<i+1<<": ";
		cin>>*dlu;
		cout<<"Podaj szerokosc pokoju nr."<<i+1<<": ";
		cin>>*sze;
		pole+=*dlu**sze;
	}
	cout<<"Pole powierzchni mieszkania wynosi: "<<pole;
	
	return 0;
}
