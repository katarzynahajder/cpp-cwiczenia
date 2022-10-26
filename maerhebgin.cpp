#include <iostream>
using namespace std;
int main()
{
	int liczba, suma=0, lp=0, np=0;
	
	for(int i=1; i>0; i++)
	{
		cout<<"Podaj liczbe: ";
		cin>>liczba;
		
		if(liczba==50)
		{
			cout<<"Suma: "<<suma<<endl;
			cout<<"Liczby nieparzyste: "<<np<<endl;
			cout<<"Liczby parzyste: "<<lp;
			break;
		}
		else
		{
			if(liczba%2==0)
			{
			    suma+=liczba;
			    lp++;
		    }
		    else np++;
		}
	}
	return 0;
}
