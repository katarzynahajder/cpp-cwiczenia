#include <iostream>
using namespace std;
int main() 
{
	int sk1=0, sk2=0, sk3=0;
	int tab[10][10];
	
	for(int i=0; i<10; i++)
	{
		for(int j=0; j<10; j++)
		{
			if(j==0)
			{
				tab[i][j]=i;
				sk1+=i;
			}
			else if(j==1)
			{
				tab[i][j]=i*i;
				sk2+=i*i;
			}
			else if(j==2)
			{
				tab[i][j]=i*i+i;
				sk3+=i*i+i;
			}
			else tab[i][j]=0;
			
			cout<<tab[i][j]<<"\t";
		}
		cout<<endl<<endl;
	}
	
	cout<<"Suma kolumny pierwszej wynosi: "<<sk1<<endl;
	cout<<"Suma kolumny drugiej wynosi: "<<sk2<<endl;
	cout<<"Suma kolumny trzeciej wynosi: "<<sk3;
	
	return 0;
}
