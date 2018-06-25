//memmove копирует блок из N байт  из  srcptr  в  destptr.
//Копирование  будет  произведено  корректно, даже, если блоки перекрываются.
//место назначения -> destptr = destination 
//источник -> srcptr = source

#include "../libft.h"
//#include "stdafx.h" //Для работы с VS12 C++11
//#include "libft.h"
//#include <cstdlib>  //Для работы с функцией system("pause")

void  *ft_memmove(void *destptr, const void *srcptr, size_t num)
{
  char bufer[num]; //old "C"
  //char *bufer = new char [num]; //multifunctional standard C/CPP/CS
  ft_memcpy(bufer, srcptr, num);
  ft_memcpy(destptr, bufer, num);
  return (destptr);
}
/*
void main()
{
  bool test_0 = true;
  bool test_1 = true;

  if(test_0) 
  {
    char srcptr[21] = "a shiny white sphere";
    printf ("srcptr old: %s\n", srcptr);
    ft_memmove(&srcptr[8], &srcptr[2], 5); //variant one
    //ft_memmove(srcptr+8, srcptr+2, 5); // variant two
    printf("srcptr new: %s\n\n", srcptr);
  }
    if(test_1) 
  {
    char dest[] = "abcdefghijklmnopqrstuvwxyz0123456789";
    char src[] = "******************************";
    printf("string before: %s\n", dest);
    ft_memmove(dest, src, 26);
    printf("string after: %s\n\n", dest);
  }
  //system("pause");
}
*/