#include <iostream>
using namespace std;

int swap(int c, int d, int *a, int *b);

int main()
{
	int x, y;

	printf("Enter int x:\n");
	scanf("%d", &x);
	printf("Enter int y:\n");
	scanf("%d", &y);

	int *ptr1 = &x;
	int *ptr2 = &y;
	
	swap(x, y, ptr1, ptr2);

	printf("int x == %d\n", x);
	printf("int y == %d\n", y);

	return 0;
}

int swap(int c, int d, int *a, int *b)
{
	*a = d;
	*b = c;	

	return 0;
}
