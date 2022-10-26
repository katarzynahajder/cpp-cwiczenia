#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	string imie, nazwisko, nr_tel;
	
	ofstream plik;
    plik.open("dane.txt", ios::app);

	for(int i=1;;i++)
	{
		cout<<"Wprowadz imie osoby "<<i<<": ";
		cin>>imie;
		if(imie=="KONIEC"||imie=="Koniec"||imie=="koniec")break;
		cout<<"Wprowadz nazwisko osoby "<<i<<": ";
		cin>>nazwisko;
		if(nazwisko=="KONIEC"||nazwisko=="Koniec"||nazwisko=="koniec")break;
		cout<<"Wprowadz numer telefonu osoby "<<i<<": ";
		cin>>nr_tel;
		if(nr_tel=="KONIEC"||nr_tel=="Koniec"||nr_tel=="koniec")break;
		
		if(plik.is_open())
		{
			plik<<imie<<" "<<nazwisko<<" "<<nr_tel<<endl;
			plik<<"----------------------------"<<endl;
		}
		system("cls");
	}
	
	plik.close();

	return 0;
}	
