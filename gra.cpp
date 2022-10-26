#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void odp(string *wsk, int x)
{
	cout<<"\n********** Wyglad tablicy: **********\n";
	for(int i=0; i<x; i++, wsk++)
	{
		cout<<i+1<<". "<<*wsk<<endl;
	}
}
int main() 
{
	string tablica[4]{"-", "-", "-", "-"}, slowo, *wsk, *tab;
	int x, y, komorka;
	srand(time(NULL));
	
	cout<<"---------- Witaj w grze o wycieczke na Cypr! ----------\n\n";
	for(int i=0; i<3; i++)
	{
		cout<<"Wpisz slowo nr."<<i+1<<" ";
		cin>>slowo;
		for(int i=0;; i++)
		{
			komorka=rand()%4;
			if(tablica[komorka]=="-")
			{
				tablica[komorka]=slowo;
				break;
			}
			else continue;
		}
	}
	for(int i=0;; i++)
	{
		wsk=&tablica[rand()%4];
		if(*wsk=="-")continue;
		else break;
	}
	
	cout<<"\nZgadnij w ktorej komorce tabeli jest slowo: "<<*wsk<<endl;
	cout<<"Odpowiedz (1-4): ";
	cin>>x;
	
	if(tablica[x-1]==*wsk) cout<<"\nZgadles! Udalo Ci sie wygrac wycieczke na CYPR!\n";
	else
	{
		cout<<"\nPUDLO KOLEGO! Niestety przegrywasz :( \n";
		for(int i=0; i<4; i++)
		{
			if(tablica[i]==*wsk)
			{
				y=i;
				break;
			}
		}
		cout<<"Poprawna opdowiedzia byla liczba "<<y+1<<endl;
	}
	
	tab=&tablica[0];
	odp(tab, 4);

	return 0;
}
