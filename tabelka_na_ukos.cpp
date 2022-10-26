#include <iostream>
using namespace std;
int main() 
{	
    int n;
	cout<<"Podaj wymiar swojwj tablicy: ";
	cin>>n;
    int **tab=new int**[n];
    tab=new int[n];
	
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	{
		if(i==j) tab[i][j]=1;
		else tab[i][j]=0;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		cout<<tab[i][j]<<"\t";
		cout<<endl;
	}

    delete [] tab;
	return 0;
}

