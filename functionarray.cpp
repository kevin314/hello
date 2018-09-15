#include <iostream>
using namespace std;

int sumarray(int count, int sum)
{
	int x;
	int array[count];

	for(x = 0; x < count; x ++)
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
	sum = sumarray(5, 0);
	
	printf("Sum is: %d\n", sum);

	return 0;
}
