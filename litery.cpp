#include <iostream>
using namespace std;
int main() 
{
	char x;
	
	cout<<"Podaj dowolna litere a ja ci powiem czy jest samogloska lub spolgloska: ";
	cin>>x;
	
	switch (x)
	{
		case 'a': cout<<"Samogloska"; break;
		case 'e': cout<<"Samogloska"; break;
		case 'i': cout<<"Samogloska"; break;
		case 'o': cout<<"Samogloska"; break;
		case 'u': cout<<"Samogloska"; break;
		case 'y': cout<<"Samogloska"; break;
		
		default: cout<<"Spolgloska"; break;
	}
	return 0;
}
