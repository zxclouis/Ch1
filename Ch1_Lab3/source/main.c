#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1;
	int num2;
	
	printf("Enter integers, and I will tell you\n");
	printf("the relationships they satisfy:");

	scanf("%d%d", &num1, &num2);

	if (num1 == num2)
	{
		printf("%d is equal to %d\n", num1, num2);
	}
	if (num1 != num2)
	{
		printf("%d is not equal to %d\n", num1, num2);
	}
	if (num1 < num2)
	{
		printf("%d is less than %d\n", num1, num2);
	}
	if (num1 > num2)
	{
		printf("%d is greater than %d\n", num1, num2);
	}
	if (num1 <= num2)
	{
		printf("%d is less than or equal to %d\n", num1, num2);
	}
	if (num1 >= num2)
	{
		printf("%d is greater than or equal %d\n", num1, num2);
	}
	system("pause");
	return 0;

}