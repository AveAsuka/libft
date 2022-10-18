#include "libft.h"

// Макрос isascii() не определен стандартом ANSI С, 
// возвращает ненулевое значение, если значение ch находится в пределах от 0 до 0x7F,
// в противном случае возвращается 0.

int ft_isascii(int ch)
{
    if (ch >= 0 && ch < 128)
        return 1;

    return 0;
}

// int main()
// {
//     printf ("Тест нашей функции:\n");
//     printf ("%d\n", ft_isascii('0'));
    
//     return 0;
// }