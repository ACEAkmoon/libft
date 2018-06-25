//Об'єднання рядків. Функція додає копію рядка srcptr в кінець рядка destptr. 
//Нульовий символ кінця рядка destptr замінюється першим символом рядка srcptr, 
//і новий нуль-символ додається в кінець уже нового рядка, сформованої об'єднанням 
//символів двох рядків в рядку destptr.
//--------------------------------------------------------------------------------
//место назначения -> destptr = destination 
//источник -> srcptr = source

#include "../libft.h"
//#include "stdafx.h" //Для работы с VS12 C++11
//#include <stdio.h>
//#include <cstdlib>  //Для работы с функцией system("pause")

char    *ft_strcat(char *destptr, char *srcptr)
{
    char *pointer_destptr;
    
    pointer_destptr = destptr;
    while (*destptr)
        destptr++;
    ft_strcpy(destptr, srcptr);
    return (pointer_destptr);
}

/*
void main()
{
  char string_0[99] = "Here we write down our row: ";
  char string_1[39] = "This is a test of the strcat function";
  char *sum;
  
  printf("%s\n%s", string_0, string_1);
  sum = ft_strcat(string_0, string_1);
  printf("\n\n%s\n\n", sum);
  //system("pause"); // Команда задержки экрана
}
*/
