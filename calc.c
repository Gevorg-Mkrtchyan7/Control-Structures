# include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	char op = 0;
	
	printf("Enter first number: ");
	scanf("%d", &a);

	printf("Enter operation(+,-,*,/): ");
	scanf(" %c", &op);
	
	printf("Enter second number: ");
	scanf("%d", &b);

	switch (op)
	{		
		case '+':
			printf("Result is: %d \n", a + b);
			break;
		case '-':
			printf("Result is: %d \n", a - b);
			break;
		case '*':
			printf("Result is: %d \n", a * b);
			break;
		case '/':
			if(b == 0){
				printf("Error, don't enter 0! \n");
			} else {
			printf("Result is: %d \n", a / b);
			}
			break;
		default:
			printf("Error \n");
		
	}
}
