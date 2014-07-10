#include <stdio.h>
#include <math.h>
#include <string.h>
#include <limits.h>

int isVowel(char c)
{
	if(c == 'a' || c == 'A' ||
	   c == 'e' || c == 'E' ||
	   c == 'i' || c == 'I' ||
	   c == 'o' || c == 'O' ||
	   c == 'u' || c == 'U' ||
	   c == 'y' || c == 'Y')
		return 1;
	return 0;
}


int main()
{
	printf("Enter String to count vowels: ");
	char input[256];
	scanf("%[^\n]%*c", input);
	int i;
	int vowels = 0;
	for(i = 0; i < strlen(input); ++i)
	{
		if(isVowel(input[i]))
		{
			++vowels;
		}
	}
	printf("\nTotal Vowels: %d", vowels);
	return 0;
}
