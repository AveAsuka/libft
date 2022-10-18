#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
    if (s == NULL)
        return ;

    size_t i;
    const char nl = '\n';

    i = ft_strlen(s);

    if (write(fd, s, i) == -1)
        return ;
    write (fd, &nl, 1);
}

// int main()
// {
//     printf ("Тест нашей функции:\n");
//     ft_putendl_fd("Test", 0);
    
//     return 0;
// }