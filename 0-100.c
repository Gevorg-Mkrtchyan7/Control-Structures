# include <stdio.h>

int main()
{
	printf("\n");
	for(int i = 0; i <= 100; i++){
		if(i % 3 == 0)
		printf("Fizz ");
	}
	printf("\n \n");

	for(int a = 0; a <= 100; a++){
		if(a % 5 == 0)
		printf("Buzz ");
	}
	printf("\n \n");

	for(int b = 0; b <= 100; b++){
		if(b % 3 == 0 ||  b % 5 == 0)
		printf("FizzBuzz");
	}
	printf("\n \n");

	for(int c = 0; c <= 100; c++){
		if(c % 3 != 0 || c % 5 != 0)
		printf("%d ", c);
	}
	printf("\n \n");

	return 0;
}
