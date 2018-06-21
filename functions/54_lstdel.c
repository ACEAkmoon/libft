//Функция lstdel Принимает в качестве параметра адрес указателя на ссылку и освобождает 
//память этой ссылки и всех преемников этой ссылки, используя функции del и free (3). 
//Наконец, указатель на только что освобожденную ссылку должен быть установлен в NULL 
//(очень похож на функцию ft_memdel из обязательной части).
//-------------------------------------------------------------------------------------

#include "../libft.h"
//#include "stdafx.h" //Для работы с VS12 C++11
//#include <stdio.h>
//#include <cstdlib>  //Для работы с функцией system()
//#include <unistd.h>
//#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	if ((*alst)->next)
		ft_lstdel(&(*alst)->next, del);
	ft_lstdelone(alst, del);
}

/*void    main(void)
{
    char content[10] = "hello sir";
    int cont_size = 5;
    t_list *test_a_list;
    t_list *test_b_list;

    test_a_list = ft_lstnew(content, cont_size);
    test_b_list->next = NULL; //FAIL need help in assigning
    test_a_list->next = &test_b_list;
    ft_lstdel(&test_a_list, free);
}*/
