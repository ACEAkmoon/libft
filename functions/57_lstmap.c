//Функция lstmap Итерирует список lst и применяет функцию f к каждой ссылке для создания 
//«свежего» списка (с использованием malloc (3)) в результате последовательных приложений f. 
//Если распределение не выполняется, функция возвращает NULL.
//------------------------------------------------------------------------------------------

#include "../libft.h"
//#include "stdafx.h" //Для работы с VS12 C++11
//#include <stdio.h>
//#include <cstdlib>  //Для работы с функцией system()
//#include <unistd.h>
//#include <stdlib.h>

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*ret;

	if (lst)
	{
		ret = f(lst);
		ret->next = ft_lstmap(lst->next, f);
		return (ret);
	}
	return (NULL);
}
