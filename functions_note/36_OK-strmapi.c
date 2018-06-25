//Функция striter Применяет функцию f к каждому символу переданной строки как аргумент, 
//указав его индекс как первый аргумент для создания “fresh” новая строка 
//(с malloc (3)) в результате последовательных приложений f.
//-------------------------------------------------------------------------------------
//Функция free освобождает место в памяти

#include "../libft.h"
//#include "stdafx.h" //Для работы с VS12 C++11
//#include <stdio.h>
//#include <cstdlib>  //Для работы с функцией system()

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new;
	unsigned int	i;

	new = ft_stralloc(s);
	if (new)
	{
		i = -1;
		while (s[++i])
			new[i] = f(i, s[i]);
		new[i] = '\0';
	}
	return (new);
}
