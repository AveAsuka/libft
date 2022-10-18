#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    if (s == NULL)
        return ;

    size_t i;

    i = ft_strlen(s);

    if (write(fd, s, i) == -1)
        return ;
}

// int main()
// {
//     printf ("Тест нашей функции:\n");
//     ft_putstr_fd("Test", 0);
    
//     return 0;
// }