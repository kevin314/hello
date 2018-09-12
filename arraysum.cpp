#include <iostream>
using namespace std;

int main()
{
	int array[5];
	int count = 5;
	int x;
	int sum = 0;

	printf("Enter 5 numbers to add:\n");

	for(x = 0; x < count; x ++)
	{
		scanf("%d", &array[x]);
		sum += array[x];
	}

	printf("Sum is: %d\n", sum);

	return 0;

}
