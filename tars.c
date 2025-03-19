# include <stdio.h>

int main() 
{
	int num = 0;
	printf("Enter a three-digit number: ");
	scanf("%d", &num);

	
	int a = num / 100;
	int b = num / 10 % 10;
	int c = num % 10;

	printf("Result is: %d%d%d \n", c, b, a);
	return 0;
}
