//Функция strsplit Выделяет (с помощью malloc (3)) и возвращает массив «свежих» строк 
//(все заканчиваются на «\0», включая сам массив), полученный путем разделения s с 
//использованием символа c в качестве разделителя. Если распределение не выполняется, 
//функция возвращает NULL. Пример: ft_strsplit ("*hello*fellow***students*", '*') 
//возвращает массив ["hello", "fellow", "students"]
//-------------------------------------------------------------------------------------

#include "../libft.h"
//#include "stdafx.h" //Для работы с VS12 C++11
//#include <stdio.h>
//#include <cstdlib>  //Для работы с функцией system()

char    **ft_strsplit(const char *s, char c)
{
    char    **ret;
    char    *pointer_ret;
    size_t    i;
    size_t    len;
    
    ret = ft_memalloc(ft_strlen(s) + 1);
    pointer_ret = ret;
    i = 0;
    while (s[i])
    {
        if (s[i] == c)
            i++;
        else
        {
            len = 0;
            while (s[i + len] && (s[i + len] != c))
                len++;
            *ret++ = ft_strsub(s, i, len);
            i += len;
        }
    }
    return (pointer_ret);
}

/*
void main()
{
  char buffer1[26] = "*hello*fellow***students*";
  char buffer2 = '*';
  char **ret;

  ret = ft_strsplit(buffer1, buffer2);
  while(*ret)
    printf("%s\n", *ret++);
}
*/
