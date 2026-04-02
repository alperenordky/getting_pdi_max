#include "pid_max.h"

int pi_atoi (char *ptr)
{
	int	j;

	j = 0;
	if (!ptr)
		return (0);
	while (*ptr)
	{
		j = (j * 10) + (*ptr - 48);
		ptr++;
	}
	return (j);
}

