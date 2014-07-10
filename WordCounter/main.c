#include <stdio.h>
#include <math.h>
#include <string.h>
#include <limits.h>

int main()
{
	printf("Enter String to count words in: ");
	char input[256];
	scanf("%[^\n]%*c", input);
	int words = 1;
	int i;
	for(i = 0; i < strlen(input); ++i)
	{
		if(input[i] == ' ')
		{
			words++;
		}
	}
	printf("Number of Words: %d", words);
	return 0;
}
