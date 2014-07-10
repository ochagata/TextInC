#include <stdio.h>
#include <math.h>
#include <string.h>
#include <limits.h>

int main()
{
	printf("Enter String to check if Palindrome: ");
	char input[256];
	scanf("%[^\n]%*c", input);
	printf("%d", strlen(input)/2);
	int flag = 0;
	int i;
	for(i = 0; i < strlen(input)/2; ++i)
	{
		if(input[i] != input[strlen(input) - i - 1])
		{
			flag = 1;
			break;
		}
	}
	if(flag == 0)
	{
		printf("\nPalindrome!");
	}
	else
	{
		printf("\nNot Palindrome");
	}
	return 0;
}
