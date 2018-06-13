//Функция strjoin Выделяет (с malloc (3)) и возвращает «свежую» строку, заканчивающуюся «\ 0», 
//результатом конкатенации s1 и s2. Если распределение не выполняется, функция возвращает NULL
//--------------------------------------------------------------------------------------------
//Конкатенация - операция обєдинения ленейних структур, обычно строк.
//--------------------------------------------------------------------------------------------
//Функция free освобождает место в памяти

#include "../libft.h"
//#include "stdafx.h" //Для работы с VS12 C++11
//#include <stdio.h>
//#include <cstdlib>  //Для работы с функцией system()

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

	str = (char *)malloc(sizeof(char) *
			(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1));
	if (str)
		ft_strcpy(ft_strcpy(str, s1), s2);
	return (str);
}

/*
void main()
{
  char string_0[7] = "Drive ";
  char string_1[9] = "Delorean";
  char *sum;
  
  printf("%s\n%s", string_0, string_1);
  sum = ft_strjoin(string_0, string_1);
  printf("\n\n%s\n\n", sum);
  //system("pause"); // Команда задержки экрана
}
*/
