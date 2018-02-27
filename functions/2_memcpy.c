//Функция memcpy копирует num байтов первого блока памяти, на который ссылается указатель srcptr, 
//во второй блок памяти, на который ссылается указатель destptr.

#include <stdio.h>

void    *ft_memcpy(void *destptr, const void *srcptr, size_t num)
{
    size_t    memptr_step;

    memptr_step = 0;
    while (num-- > memptr_step)
        ((char*)destptr)[num] = ((char*)srcptr)[num];
}

int main()
{
  char string_0[] = "The memcpy function copies the num bytes of the first memory block";
  char string_1[] = "This is a test of the memset function";
  printf("%s\n%s", string_0, string_1);
  ft_memcpy(string_0, string_1, 10);
  printf("\n\n%s", string_0);
  return 0;
}