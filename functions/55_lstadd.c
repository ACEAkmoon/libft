//Функция lstadd Добавляет элемент new в начале списка
//----------------------------------------------------
//Пары. # 1 Адрес указателя на первую ссылку списка.
//Пары. # 2 Ссылка для добавления в начале списка

#include "../libft.h"
//#include "stdafx.h" //Для работы с VS12 C++11
//#include <stdio.h>
//#include <cstdlib>  //Для работы с функцией system()
//#include <unistd.h>
//#include <stdlib.h>

void    ft_lstadd(t_list **alst, t_list *new)
{
    new->next = *alst;
    *alst = new;
}
