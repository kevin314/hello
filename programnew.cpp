#include <iostream>
#include <string>
using namespace std;

int main()
{
	string x;
	while (x!= "exit")
	{
		cout << "Enter word: " <<endl;
		cin >> x;
	if(x!= "exit")
		{
		cout << x <<endl;
		}
	}	
	return 0;
}
