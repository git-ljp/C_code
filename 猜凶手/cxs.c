#include <stdio.h>
char findkiller() 
{
	char killer = 'a';
	for (killer='a'; killer <= 'd'; killer++)
	{
		if (((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd')) == 3) 
		{
			printf("Ð×ÊÖÊÇ: %c\n", killer);
		}
	}
}
int main()
{
	findkiller();
	return 0;
}
