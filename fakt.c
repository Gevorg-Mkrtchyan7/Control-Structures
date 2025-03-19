# include <stdio.h>

int main()
{
	int a = 0;
	printf("Enter a number and l will calculate factorial: ");
	scanf("%d", &a);
	printf("\n");
	int b = a;
	int res = 1;

	for(int i = 0; i < a; i++){
		res = res * b;
		b--;
	}
		printf("Result is: %d", res);
		printf("\n");
	
	return 0;
}
