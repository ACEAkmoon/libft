//Функция сравнивает первые num байтов блока памяти указателя memptr1 
//с первыми num байтами блока памяти memptr2. 
//Возвращаемое значение 0 если блоки равны, и значение отличное от 0, если  блоки не равны.
//-----------------------------------------------------------------------------------------
//Функция memcmp начинает сравнивать по одному байту и как только будут найдены первые неодинаковые символы, 
//функция проанализирует числовой код этих символов. Чей код окажется больше, тот блок памяти и будет считаться больше.

#include "stdafx.h" //Для работы с VS12 C++11
#include <stdio.h>
#include <cstdlib>  //Для работы с функцией system("pause")

int ft_memcmp(const void *memptr1, const void *memptr2, size_t num)
{
  size_t step = 0;

  while (step < num)
  {
    if(((char*)memptr1)[step] != ((char*)memptr2)[step])
      return (((char*)memptr1)[step] - ((char*)memptr2)[step]);
    step++;
  }
  return (0); //Ошибка 1 error C4716: должна возвращать значение
}

void main()
{
  char buffer1[13] = "DWgaOtP12df0";
  char buffer2[13] = "DWGAOTP12DF0";

  int n = ft_memcmp(buffer1, buffer2, 13);

  if(n == 0)
    printf("'%s' is the == as '%s'.\n", buffer1, buffer2);
  else if(n > 0)
    printf("'%s' is > than '%s'.\n", buffer1, buffer2);
  else if(n < 0)
    printf("'%s' is < than '%s'.\n", buffer1, buffer2);
  else
    printf("ERROR FUNCTION");
  system("pause");
}
