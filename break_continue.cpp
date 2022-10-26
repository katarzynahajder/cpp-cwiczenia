#include <iostream>
using namespace std;
int main() 
{
	int suma=0, x;
	char w;
	
	cout<<"Podaj ilosc liczb: ";
	cin>>x;
	for(;;)
	{
		if(x==0||x<0||x>99)
		{
			cout<<"Podana wartosc jest niepoprawna (musi byc wieksza od 0 i mniejsza niz 100). \nWprowadz ja ponownie: ";
			cin>>x;
		}
		else break;
	}
	
	for(int i=0; i<x; i++)
	{	
 		if(i%2==0)
		{
			suma+=i;
			if(suma>0&&suma%10==0)
    		{
    			cout<<"Suma jest wieloktornoscia liczby 10. \nLiczyc dalej? ";
    			cin>>w;
    			if(w=='T'||w=='t') continue;
    			else if(w=='N'||w=='n')
    			{
    				cout<<"Suma wynosi "<<suma<<".";
    				break;
    			}
    		}
    		cout<<suma<<endl;
		}
	}
	return 0;
}
