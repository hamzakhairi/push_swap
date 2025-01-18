#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "get_next_line/get_next_line.h"

int	validate_flage(char *flage)
{
	if (strcmp(flage, "sa\n") == 0)
        printf("[sa]\n");
    else if ( strcmp(flage, "sb\n") == 0 )
        printf("[sa]\n");
	else if ( strcmp(flage, "ss\n") == 0 )
        printf("[sa]\n");
    else if ( strcmp(flage, "pa\n") == 0 )
        printf("[sa]\n");
	else if ( strcmp(flage, "pb\n") == 0 )
        printf("[sa]\n");
    else if ( strcmp(flage, "ra\n") == 0 )
        printf("[sa]\n");
	else if ( strcmp(flage, "rb\n") == 0 )
        printf("[sa]\n");
    else if ( strcmp(flage, "rr\n") == 0 )
        printf("[sa]\n");
	else if ( strcmp(flage, "rra\n") == 0 )
        printf("[sa]\n");
    else if ( strcmp(flage, "rrb\n") == 0 )
        printf("[sa]\n");
	else if ( strcmp(flage, "rrr\n") == 0)
        printf("[sa]\n");
	return (1);
	// return (0);
}

// Read input instructions and validate them
void	start_checker()
{
	char	*buf;

	buf = get_next_line(0);
	while (buf)
	{
		if (!validate_flage(buf))
		{
			write(STDERR_FILENO, "Error\n", 6);
			free(buf);
			return;
		}
		free(buf);
		buf = get_next_line(0);
	}
}

// Entry point of the program
int	main(int argc, char **argv)
{
	// Validate arguments
	if (argc < 2)
		return (0);

	// Read and process instructions
	start_checker();
	return (0);
}
