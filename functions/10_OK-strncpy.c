//Функція копіює перші num символів з рядка srcptr в рядок destptr.
//Якщо кінець рядка srcptr (символ кінця рядка) досягнутий перш, ніж були скопійовані 
//num символів, до скопійованим символам в кінець рядка destptr додається нуль-символ, 
//після чого, рядок вважається скопійованої.
//-----------------------------------------------------------------------------------
//место назначения -> destptr = destination 
//источник -> srcptr = source

#include "../libft.h"
//#include "stdafx.h" //Для работы с VS12 C++11
//#include <stdio.h>
//#include <cstdlib>  //Для работы с функцией system("pause")

char    *ft_strncpy(char *destptr, char *srcptr, unsigned int num)
{
    unsigned int    save_num;

    save_num = num;
    while (num-- && *srcptr)
        *destptr++ = *srcptr++;
    if (num < save_num)
      ft_bzero(destptr, num);
    return (destptr);
}

/*
void main()
{
  char string_0[39] = "";
  char string_1[39] = "This is a test of the strncpy function";
  printf("%s\n%s", string_0, string_1);
  ft_strncpy(string_0, string_1, 38);
  printf("\n\n%s\n\n", string_0);
  //system("pause"); // Команда задержки экрана
}
*/
