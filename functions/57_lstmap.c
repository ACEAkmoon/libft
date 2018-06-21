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

t_list	*ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem))
{
	t_list	*ret;
	t_list	*ret_last;

	ret = ret_last = f(lst);
	if (ret == NULL)
		return (NULL);
	
	while (lst->next) {
		lst = lst->next;
		ret_last->next = f(lst);
		if (ret_last->next == NULL)
			return (NULL);
		ret_last = ret_last->next;
	}
	return (ret);
}


t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*sortie;

	if (lst)
	{
		sortie = f(lst);
		sortie->next = ft_lstmap(lst->next, f);
		return (sortie);
	}
	return (NULL);
}

