#include "libft.h"

int ft_isalnum(int ch)
{
    if ( (ch >= 'A' && ch <= 'Z') ||   
            (ch >= 'a' && ch <= 'z') ||
            (ch >= '0' && ch <= '9') )
        return 1;

    return 0;
}

// int main()
// {
//     printf ("Тест нашей функции:\n");
//     printf ("%d\n", ft_isalnum('a'));
    
//     return 0;
// }