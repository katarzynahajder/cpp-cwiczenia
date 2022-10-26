#include <iostream>
using namespace std;
int minimalna(int tab[], int n)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n-1; j++)
		{
			if(tab[j]>tab[j+1])swap(tab[j], tab[j+1]);
		}
	}
	cout<<tab[0];
}
int maksymalna(int tab[], int n)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n-1; j++)
		{
			if(tab[j]<tab[j+1])swap(tab[j], tab[j+1]);
		}
	}
	cout<<tab[0];
}
int main() 
{
	int n;
	cout<<"Podaj ilosc liczb naturalnych: ";
	cin>>n;
	int tab[n];
	cout<<"Wpisz kolejno liczby naturalne: "<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<i+1<<". ";
		cin>>tab[i];
	}
	cout<<"Wartosc minimalna: "; minimalna(tab, n);
	cout<<"\nWartosc maksymalna: "; maksymalna(tab, n);
	
	
	return 0;
}
