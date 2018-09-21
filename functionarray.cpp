#include <iostream>
using namespace std;

int sumarray(int count)
{
	int x;
	int array[count];
	int sum = 0;

	for(x = 0; x < count; x++)
	{
		scanf("%d", &array[x]);
		sum += array[x];
	}
	
	return sum;
}
	
int main()
{
	printf("Enter 5 numbers to add:\n");

	int sum;
	sum = sumarray(5);
	
	printf("Sum is: %d\n", sum);

	return 0;
}
