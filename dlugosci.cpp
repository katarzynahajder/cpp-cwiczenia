#include <iostream>
using namespace std;
int d1, d2, d3;
int main()
{
	cout<<"Podaj pierwsza dlugosc: ";cin>>d1;
	cout<<"Podaj druga dlugosc: ";cin>>d2;
	cout<<"Podaj trzecia dlugosc: ";cin>>d3;
	
if (d1>d2, d1>d3) {
    cout<<d1<<" jest najwieksza!"<<endl;
}
if (d2>d1, d2>d3) {
	cout<<d2<<" jest najwieksza!"<<endl;
}
if (d3>d2, d3>d1) {
	cout<<d3<<" jest najwieksza!"<<endl;
}
	return 0;
}
