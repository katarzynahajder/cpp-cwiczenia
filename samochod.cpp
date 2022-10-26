#include <iostream>
using namespace std;
string marka, kolor;
int drzwi, miejsca;
float pojemnosc;
int main()
{
	cout<<"Jakiej marki samochod posiadasz? ";cin>>marka;\
	cout<<"Jakiego koloru? ";cin>>kolor;
	cout<<"Ile ma miejsc? ";cin>>miejsca;
	cout<<"A drzwi? ";cin>>drzwi;
	cout<<"A teraz podaj dokladna pojemnosc silnika: ";cin>>pojemnosc;
	cout<<"\nMasz samochod marki "<<marka<<", w kolorze "<<kolor<<"m. Twoj pojazd ma "<<miejsca<<" miejsc oraz "<<drzwi<<" drzwi. "<<endl;
	cout<<"A pojemnosc jego silnika wynosi "<<pojemnosc<<"cm3.";
	return 0;
}
