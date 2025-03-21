# include <stdio.h>

int main() 
{
	int a = 0;
	int num = 0;
	printf("Enter a number: ");
	scanf("%d", &num);

	printf("result is: ");

	while(num > 0){
		a = num % 10;
		printf("%d", a);
		num /= 10;
	}
	printf("\n");

	return 0;
}
