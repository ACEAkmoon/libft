
#include "libft.h"

void	ft_arrdel(char **arr)
{
	int i;

	i = -1;
	if (arr && *arr)
		while (arr[++i])
		{
			free(arr[i]);
			arr[i] = NULL;
		}
}
