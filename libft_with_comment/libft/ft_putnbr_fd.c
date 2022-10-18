#include "libft.h"

// Выводит целое число 'n' в указанный файловый дескриптор 'fd'.
void ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		ft_putnbr_fd(147483648, fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}

// int main()
// {
//     printf ("Тест нашей функции:\n");
//     ft_putnbr_fd(2147483649, 0);
//     return 0;
// }