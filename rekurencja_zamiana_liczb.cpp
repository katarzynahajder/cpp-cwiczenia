#include <iostream>
using namespace std;
int zamiana(int n, int x)
{
    if(n>=x)
    {
    	if(n==1)return 1;
    	else if(n==4)
    	{
    		cout<<"1 0 ";
    		return 0;
		}
		else if(n==8)
		{
			cout<<"1 0 0 ";
			return 0;
		}
    	cout<<1<<" ";
    	return zamiana(n-x, x/2);

	}
	else if(n<x)
	{
		if(n==0)return 0;
		cout<<0<<" ";
		return zamiana(n, x/2);	
	}

}
int main()
{
    int a, b=128; //zakres podawanych liczb od 0 do b*2-1
    cout<<"Podaj liczbe dziesietna ktora chcesz zamienic na binarna (do 255): ";
    cin>>a;
    cout<<"Wynik: ";
    cout<<zamiana(a, b);	

    return 0;
}
