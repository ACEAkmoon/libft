//Функция putnbr_fd Выводит целое число n в файловый дескриптор fd
//-------------------------------------------------------------------------------
//write(1, &c, 1) -> (главный екран, передать в переменную "С", вывести один раз)

#include "../libft.h"
//#include "stdafx.h" //Для работы с VS12 C++11
//#include <stdio.h>
//#include <cstdlib>  //Для работы с функцией system()
//#include <unistd.h>

void    ft_putnbr_fd(int n, int fd)
{
    if (n < 0 && (n = -n))
        ft_putchar_fd('-', fd);
    if ((n / 10) > 0)
        ft_putnbr_fd(n / 10, fd);
    ft_putchar_fd((n % 10) + 48, fd);
}

/*void    ft_putnbr_fd(int n, int fd)
{
    if (n < 0 && (n = -n))
        ft_putchar_fd('-', fd);
    if (n < 10)
        ft_putchar_fd(n + '0', fd);
    else
    {
        ft_putnbr_fd(n / 10, fd);
        ft_putnbr_fd(n % 10, fd);
    }
}

void    main(void)
{
    int tmp = -2147483640;

    ft_putnbr_fd(tmp, 1);
}*/
