//Функция isupper проверяет символ, передаваемый через параметр character, 
//является ли он прописным символом.
//------------------------------------------------------------------------

//#include "../libft.h"
//#include "stdafx.h" //Для работы с VS12 C++11
//#include <stdio.h>
//#include <cstdlib>  //Для работы с функцией system()

int	ft_isupper(int character)
{
	return (character >= 'A' && character <= 'Z');
}

//"main" reproduse is in "isalpha"
