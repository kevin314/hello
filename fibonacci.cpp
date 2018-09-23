#include <iostream>
using namespace std;

int swap(int *a, int *b);

int main()
{
	int term;
	int const MAX_TERM_VALUE = 10000;
	int x = 0;
	int y = 1;
	
	printf("0\n");

	for(term = 2; term < MAX_TERM_VALUE; x = x + y)
	{
		y = term - y;
		swap(&x, &y);
		term = x + y;
		swap(&x, &y);
		printf("%d\n", term);
	}	

	return 0;
}

int swap(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
	
	return 0;
}
		
