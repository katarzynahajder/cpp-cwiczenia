#include <iostream>
#include <iomanip>
using namespace std;
float pole_prostokata()
{
	float a, b, pole;
	cout<<"Wprowadz pierwszy bok: "; cin>>a;
	cout<<"Wprowadz drugi bok: "; cin>>b;
	pole=a*b;
	cout<<"Pole prostokata wynosi: "<<fixed<<setprecision(2)<<pole<<endl;
	
	return 0;
}
int main() 
{
	pole_prostokata();
	
	return 0;
}
