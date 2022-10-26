#include <iostream>
using namespace std;
int main() 
{
	int x, y;
	cout<<"Podaj dwie liczby calkowite:"<<endl<<"1. ";
	cin>>x;
	cout<<"2. ";
	cin>>y;
	
	for(;;)
	{
		if(x<0) x*=(-1);
		else if(y<0) y*=(-1);
		else if(x==y||y==0)
		{
			cout<<"Najwiekszy wspolny dzielnik tych liczb wynosi: "<<x;
			break;
		}
		else if(x==0)
		{
			cout<<"Najwiekszy wspolny dzielnik tych liczb wynosi: "<<y;
			break;
		}
		else
		{
			if(x>y) x-=y;
			else y-=x;
		}
	}
	
	return 0;
}
