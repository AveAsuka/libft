#include "libft.h"

// что врайтим, куда врайтим
void ft_putchar_fd(char c, int fd)
{ // тут наоборот - куда и что
    if (write(fd, &c, 1) == -1)
        return ;
}

// int main()
// {
//     printf ("Тест нашей функции:\n");
//     ft_putchar_fd('T', 0);
    
//     return 0;
// }