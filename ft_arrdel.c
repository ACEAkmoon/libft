
#include "libft.h"

void	ft_arrdel(char **arr)
{
	if (arr && *arr)
		while (*arr)
		{
			free(arr);
			*arr++ = NULL;
		}
}
