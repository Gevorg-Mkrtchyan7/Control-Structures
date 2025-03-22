# include <stdio.h>

int main()
{
	int a = 0;
	int num = 0;
	printf("Enter a number: ");
	scanf("%d", &num);
	int test = num;
        int digit = 0;
	int rev= 0;
	 
	while(test != 0){
		 digit = test % 10;
                 rev = rev * 10 + digit;
		 test /= 10;
	 }

	 while(rev != 0){
		 digit = rev % 10;
		 printf("%d, ",digit);
		 rev /= 10;
	 }
	 printf("\n");
	 
	 return 0;
}
