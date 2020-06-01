#include <stdio.h>

void main()
{
	long num, temp, digit, sum = 0;

	printf("Enter number \n");
	scanf("%ld", &num);
	temp = num;
	while (num > 0)
	{
		digit = num % 10;
		sum = sum + digit;
		num /= 10;
	}
	printf("Enter number = %ld\n", temp);
	printf("Total digits %ld = %ld\n", temp, sum);
}
