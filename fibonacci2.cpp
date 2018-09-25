#include <iostream>
using namespace std;

int main()
{
	int term; 
	int x = 0;
	int y = 1;
	int const MAX_TERM_VALUE = 1000000000;

	while(x + y < MAX_TERM_VALUE)
	{
		term = x + y;
		x = y;
		y = term;
		printf("%d\n", term);
	}
	
	return 0;
}
