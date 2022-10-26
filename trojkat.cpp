#include <iostream>
using namespace std;
float d1, d2, d3;
int main() 
{
	cout<<"Podaj trzy rozne dlugosci:"<<endl;

	cout<<"1) ";cin>>d1;
    cout<<"2) ";cin>>d2;
    cout<<"3) ";cin>>d3;

    if (d1*d1+d2*d2==d3*d3||d2*d2+d3*d3==d1*d1||d3*d3+d1*d1==d2*d2) cout<<"Z tych dlugosci mozna zbudowac trojkat prostokatny!";
    else cout<<"Z tych dlugosci nie mozna zbudowac trojkata prostokatnego!";

	return 0;
}
