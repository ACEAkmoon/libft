//Функция lstnew Выделяет (с malloc (3)) и возвращает «свежую» ссылку. 
//Содержимое переменных и content_size новой ссылки инициализируются копией параметров функции. 
//Если содержимое параметра равно nul, содержимое переменной инициализируется в NULL, 
//а переменная content_size инициализируется до 0, даже если параметр content_size не является. 
//Следующая переменная инициализируется значением NULL. Если распределение не выполняется, 
//функция возвращает NULL.
//---------------------------------------------------------------------------------------------
//size_t беззнаковый целый тип данных, возвращаемый оператором sizeof, 
//определен в заголовочном файле <cstring>.

#include "../libft.h"
//#include "stdafx.h" //Для работы с VS12 C++11
//#include <stdio.h>
//#include <cstdlib>  //Для работы с функцией system()
//#include <unistd.h>

t_list      *ft_lstnew(void const *content, size_t content_size)
{
    t_list      *list;

    if (!(list = (t_list*)malloc(sizeof(t_list))))
        return (NULL);
    if (!content || !content_size)
    {
        list->content = NULL;
        list->content_size = 0;
    }
    else
    {
        list->content = ft_memalloc(content_size);
        list->content = ft_memcpy(list->content, content, content_size);
        list->content_size = content_size;
    }
    list->next = NULL;
    return (list);
}

/*void    main(void)
{
    int content = "hello sir";
    int cont_size = 5;
    t_list *test_list;
    char *str;
    int num_0, num_1;

    test_list = ft_lstnew(content, cont_size);
    str = ft_memalloc(cont_size + 1);
    str = ft_memcpy(str, test_list->content, cont_size);
    num_0 = test_list->content_size;
    num_1 = test_list->next;
    printf("Content: %s\nContent_size: %d\nNext: %d", str, num_0, num_1);
}*/
