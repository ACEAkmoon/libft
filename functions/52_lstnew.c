//Функция lstnew Выделяет (с malloc (3)) и возвращает «свежую» ссылку. 
//Содержимое переменных и content_size новой ссылки инициализируются копией параметров функции. 
//Если содержимое параметра равно nul, содержимое переменной инициализируется в NULL, 
//а переменная content_size инициализируется до 0, даже если параметр content_size не является. 
//Следующая переменная инициализируется значением NULL. Если распределение не выполняется, 
//функция возвращает NULL.
//---------------------------------------------------------------------------------------------

#include "../libft.h"
//#include "stdafx.h" //Для работы с VS12 C++11
//#include <stdio.h>
//#include <cstdlib>  //Для работы с функцией system()
//#include <unistd.h>

t_list  *ft_lstnew(void const *content, size_t content_size)
{
    t_list  *list;

    list = (t_list*)malloc(sizeof(t_list));
    if (list == NULL)
        return (NULL);
    
    if (content == NULL) {
        list->content = NULL;
        list->content_size = 0;
    } else {
        list->content = malloc(content_size);
        if (list->content == NULL)
            return (NULL);
        ft_memcpy(list->content, content, content_size);
        list->content_size = content_size;
    }
    list->next = NULL;
    return (list);
}

//******************************************************************************

t_list      *ft_lstnew(const void *content, size_t content_size)
{
    t_list      *new_link;

    if (!(new_link = (t_list*)malloc(sizeof(t_list))))
        return (NULL);
    if (!content || !content_size)
    {
        new_link->content = NULL;
        new_link->content_size = 0;
    }
    else
    {
        new_link->content = ft_memalloc(content_size);
        new_link->content = ft_memcpy(new_link->content, content, content_size);
        new_link->content_size = content_size;
    }
    return (new_link);
}

