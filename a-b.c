# include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	
	printf("Enter the first number: ");
	scanf("%d", &a);

	printf("Enter the second number: ");
	scanf("%d", &b);

	if(a > b)
	printf("Error \n");

	while(a <= b){
	if(a % 5 == 0)
	printf("%d \n", a);
	a++;
	}
       return 0;	
}
