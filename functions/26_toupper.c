//Функция toupper выполняет преобразование строчных букв в прописные. 
//То есть, преобразует свой параметр в прописной эквивалент, если символ строчный.
//--------------------------------------------------------------------------------

//#include "../libft.h"
//#include "stdafx.h" //Для работы с VS12 C++11
//#include <stdio.h>
//#include <cstdlib>  //Для работы с функцией system()

int	ft_toupper(int character)
{
	if (ft_islower(character))
		return (character + 65 - 97);
	return (character);
}
