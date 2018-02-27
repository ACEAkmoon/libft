//Функция bzero() устанавливает первые memptr байт области, начинающейся с num, в ноль (байты, содержащие '\0'))

#include "libft.h"

void	ft_bzero(void *memptr, size_t num)
{
	ft_memset(memptr, 0, num);
}
