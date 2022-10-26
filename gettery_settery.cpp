#include <iostream>
using namespace std;

class osoba
{
private:						
	string imie;
	string nazwisko;
	
	int pesel;
	int dataur;
			
public:
    int set_imie(string i)
    {
    if((i[0]>='A')&&(i[0]<='Z'))
    {
    	imie=i;
    	return 0;
	}
    else
    {
    	cout<<"Blad imienia. Sprawdz czy zaczyna sie z duzej litery.";
    	return 1;
	}
	}
	
	string get_imie()
    {
    return imie;
	}
	
	int set_nazwisko(string n)
    {
    if((n[0]>='A')&&(n[0]<='Z'))
    {
    	nazwisko=n;
    	return 0;
	}
    else
    {
    	cout<<"Blad nazwiska. Sprawdz czy zaczyna sie z duzej litery.";
    	return 1;
	}
	}
	
	string get_nazwisko()
    {
    return nazwisko;
	}
	
	int set_pesel(int p)
    {
    	pesel=p;
    	return 0;
	}
	
	int get_pesel()
    {
    return pesel;
	}
	
	int set_dataur(int d)
    {
    	dataur=d;
    	return 0;
	}
	
	int get_dataur()
    {
    return dataur;
	}
};

int main(int argc, char** argv) {
	
	osoba ja;
	
	cout<<"Podaj imie: ";
	string imie;
	cin>>imie;
	if(ja.set_imie(imie)==0) cout<<"Twoje imie to: "<<ja.get_imie();
	
	cout<<"\n\nPodaj nazwisko: ";
	string nazwisko;
	cin>>nazwisko;
	if(ja.set_nazwisko(nazwisko)==0) cout<<"Twoje nazwisko to: "<<ja.get_nazwisko();
	
	cout<<"\n\nPodaj PESEL: ";
	int pesel;
	cin>>pesel;
	if(ja.set_pesel(pesel)==0) cout<<"Twoj PESEL to: "<<ja.get_pesel();
	
	cout<<"\n\nPodaj date urodzenia: ";
	int data;
	cin>>data;
	if(ja.set_dataur(data)==0) cout<<"Twoj data urodzenia to: "<<ja.get_dataur();
	
	return 0;
}
