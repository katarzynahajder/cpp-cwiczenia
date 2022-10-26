#include <iostream>
#include <string>
using namespace std;
int main() 
{
	string wyraz1="malina",wyraz2="komputer", odpowiedz;
	int pktk=0, pktg=0;
	cout<<"Witaj w grze ZGADYWANKA!"<<endl<<endl;
	cout<<"Sproboj zgadnac pierwsze slowo! Liczba prob: 3"<<endl;
	for(int i=1; i<4; i++)
	{
		cin>>odpowiedz;
		if(odpowiedz==wyraz1)
		{
			pktg++;
			cout<<"Gratulacje! Udalo ci sie zgadnac slowo, wygrywasz z komputerem "<<pktg<<"-"<<pktk<<endl<<endl;
			break;
		}
		else if(i==3)
		{
			pktk++;
			cout<<"Przegrywasz z komputerem "<<pktg<<"-"<<pktk<<endl<<endl;
		}
		else if(i==1)
		{
			cout<<"Niestety nie udalo sie sie odgadnac slowa... Pozostale proby: "<<3-i<<endl;
			cout<<"Podpowiedz: jest to roslina"<<endl;
		}
		else
		{
			cout<<"Niestety nie udalo sie sie odgadnac slowa... Pozostale proby: "<<3-i<<endl;
			cout<<"Podpowiedz: krzew o malych rozowych owocach"<<endl;
		}
	}
	cout<<"Sproboj zgadnac drugie slowo! Liczba prob: 3"<<endl;
	for(int i=1; i<4; i++)
	{
		cin>>odpowiedz;
		if(odpowiedz==wyraz2)
		{
			pktg++;
			if(pktg==pktk)cout<<"Gratulacje! Udalo ci sie zgadnac slowo, remisujesz z komputerem "<<pktg<<"-"<<pktk<<endl<<endl;
			else cout<<"Gratulacje! Udalo ci sie zgadnac slowo, wygrywasz z komputerem "<<pktg<<"-"<<pktk<<endl<<endl;
			break;
		}
		else if(i==3)
		{
			pktk++;
			if(pktg==pktk)cout<<"Niestety nie udalo sie sie odgadnac slowa... Remisujesz z komputerem "<<pktg<<"-"<<pktk<<endl<<endl;
			else cout<<"Przegrywasz z komputerem "<<pktg<<"-"<<pktk<<endl<<endl;
		}
		else if(i==1)
		{
			cout<<"Niestety nie udalo sie sie odgadnac slowa... Pozostale proby: "<<3-i<<endl;
			cout<<"Podpowiedz: jest to przedmiot"<<endl;
		}
		else
		{
			cout<<"Niestety nie udalo sie sie odgadnac slowa... Pozostale proby: "<<3-i<<endl;
			cout<<"Podpowiedz: mozesz korzystac z niego przy e-lekcjach"<<endl;
		}
	}
	return 0;
}
