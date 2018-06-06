//Функция striter Применяет функцию f к каждому символу указанной строки
//в качестве аргумента для создания “fresh” новой строки (с malloc (3))
//в результате последовательных применений f.
//-----------------------------------------------------------------------
//Функция free освобождает место в памяти

#include "../libft.h"
//#include "stdafx.h" //Для работы с VS12 C++11
//#include <stdio.h>
//#include <cstdlib>  //Для работы с функцией system()

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*new;
	unsigned int	i;

	new = ft_stralloc(s);
	if (new)
	{
		i = -1;
		while (s[++i])
			new[i] = f(s[i]);
		new[i] = '\0';
	}
	return (new);
}
