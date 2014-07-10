#include <stdio.h>
#include <math.h>
#include <string.h>
#include <limits.h>



int main()
{
	printf("Enter String to be reversed: ");
	char input[256];
	scanf("%[^\n]%*c", input);
	printf("Reversed: ");
	int i;
	for(i = strlen(input) - 1; i >= 0; --i)
	{
		printf("%c", input[i]);
	}
	return 0;
}
