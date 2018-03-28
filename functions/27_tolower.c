//Функция tolower выполняет преобразование прописных букв в строчные. 
//То есть, преобразует свой параметр в строчный эквивалент, если символ с заглавной буквы.
//----------------------------------------------------------------------------------------

//#include "../libft.h"
//#include "stdafx.h" //Для работы с VS12 C++11
//#include <stdio.h>
//#include <cstdlib>  //Для работы с функцией system()

int	ft_tolower(int character)
{
	if (ft_isupper(character))
		return (character + 97 - 65);
	return (character);
}
