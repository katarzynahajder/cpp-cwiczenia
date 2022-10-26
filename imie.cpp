#include <iostream>
using namespace std;
int wiek;
int main() 
{
	cout<<"Czesc, jak sie nazywasz? ";
	string imie;
	cin>>imie;
	string nazwisko;
	cin>>nazwisko;
	cout<<"***********************************************************************************************************************"<<endl;
	cout<<"Witaj "<<imie<<" "<<nazwisko<<"!"<<endl;
	cout<<"***********************************************************************************************************************"<<endl;
	cout<<"Podaj swoj wiek: ";
	cin>>wiek;
	cout<<"Masz "<<wiek;cout<<" lat!"<<endl;
	return 0;
}

