//Функция strsub Выделяет (с malloc (3)) и возвращает «свежую» подстроку из строки, 
//указанной в качестве аргумента. Подстрока начинается с indexstart и имеет размер len. 
//Если start и len не относятся к допустимой подстроке, поведение не определено. 
//Если распределение не выполняется, функция возвращает NULL.
//-------------------------------------------------------------------------------------
//Функция free освобождает место в памяти

#include "../libft.h"
//#include "stdafx.h" //Для работы с VS12 C++11
//#include <stdio.h>
//#include <cstdlib>  //Для работы с функцией system()

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*str;

	str = malloc(sizeof(char) * (len + 1));
	if (str)
	{
		while (start--)
			s++;
		ft_strncpy(str, s, len);
		str[len] = '\0';
	}
	return (str);
}

/*
void main()
{
  char i[15] = "Lorean Honas!!!";
  
  printf("%s", ft_strsub(i, 7, 5));
}
*/