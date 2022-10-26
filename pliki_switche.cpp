#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	int x, y=0;
	for(;;)
	{
		system("cls");
		cout<<"DOSTEPNE OPCJE:\n1.Zapisz tekst w pliku\n2.Odczytaj plik\n3.Zakonczenie programu\n";
		cin>>x;
		switch(x)
		{
			case 1:
	    	{
    			ofstream plik;
            	string tekst;
            	plik.open("tekst.txt", ios::app);
            	if(plik.is_open())
            	{
            		cout<<"Podaj tekst do zapisu:\n";
            		cin.ignore();
            		getline(cin, tekst);
            		plik<<tekst<<"\n";
            	}
            	plik.close();
	    	}
	    	break;
		case 2:
			{
				ifstream plik;
				string tekst;
            	plik.open("tekst.txt");
            	cout<<"Odczytany plik:\n";
            	while(getline(plik, tekst))
	            {
            		cout<<tekst<<"\n";
            	}
            	system("pause");
            	plik.close();
    		}
    		break;
    	case 3:
    		{
    			y=1;
			}
			break;
		}
		if(y==1)
		break;
	}

	return 0;
}
