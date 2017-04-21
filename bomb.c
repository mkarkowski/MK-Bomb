#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

#define BLOCK_SIZE 1000000

int main()
{
	char *gar;

	while(1)
	{
		fork();
		gar = malloc(BLOCK_SIZE);
		int x = 0;

		while(x < BLOCK_SIZE)
		{
			*(gar+x) = 'X';
			x++;
		}
	}
}
