#include <iostream>
using namespace std;

int swap(int *a, int *b);

int main()
{
	int x, y;
	
	printf("Enter int x:\n");
	scanf("%d", &x);
	printf("Enter int y:\n");
	scanf("%d", &y);

	int *ptr1 = &x;
	int *ptr2 = &y;

	swap(&x, &y);

	printf("int x == %d\n", x);
	printf("int y == %d\n", y);
	
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
