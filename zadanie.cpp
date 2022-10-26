#include <iostream>
using namespace std;
float pierwsza, druga, wynik;
int dodawanie(float p, d, w);
int mnozenie(float p, d, w);
float odejmowanie(float p, d, w);
float dzielenie(float p, d, w);
float srednia(float p, d, w);
int main() 
{
	cout<<"Podaj dwie dowolne liczby: "<<endl;
	cout<<"1) ";
	cin>>pierwsza;
	cout<<"2) ";
	cin>>druga;
	cout<<"Wynik dodawania: "<<dodawanie(wynik);
	cout<<"Wynik odejmowania: "<<odejmowanie(wynik);
	cout<<"Wynik mnozenia: "<<mnozenie(wynik);
	cout<<"Wynik dzielenia: "<<dzielenie(wynik);
	cout<<"Srednia: "<<srednia(wynik);
	
	return 0;
}
dodawanie(float p, d, w)
{
	w=a+b;
	return w;
}
odejmowanie(float p, d, w
{
    w=p-d;
    return w;
}
mnozenie(float p, d, w)
{
    w=p*d;
    return w;
}
dzielenie(float p, d, w)
{
	w=p/d;
	return w;
}
srednia(float p, d, w)
{
	w=(p+d)/2;
	return w;
}
