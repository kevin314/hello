#include <iostream>
using namespace std;

<<<<<<< HEAD
int swap(int *a, int *b);
=======
int swap(int c, int d, int *a, int *b);
>>>>>>> 887a874801e9f7f9adca61ea9faadbbbd167be79

int main()
{
	int x, y;
<<<<<<< HEAD
	
=======

>>>>>>> 887a874801e9f7f9adca61ea9faadbbbd167be79
	printf("Enter int x:\n");
	scanf("%d", &x);
	printf("Enter int y:\n");
	scanf("%d", &y);

	int *ptr1 = &x;
	int *ptr2 = &y;
<<<<<<< HEAD

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
=======
	
	swap(x, y, ptr1, ptr2);

	printf("int x == %d\n", x);
	printf("int y == %d\n", y);

	return 0;
}

int swap(int c, int d, int *a, int *b)
{
	*a = d;
	*b = c;	
>>>>>>> 887a874801e9f7f9adca61ea9faadbbbd167be79

	return 0;
}
