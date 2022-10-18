#include "libft.h"

// Функция isdigit проверяет аргумент, 
// передаваемый через параметр сharacter, является ли он десятичной цифрой.

int ft_isdigit(int character)
{
    if (character >= '0' && character <= '9')
        return 1;

    return 0;
}

// int main()
// {
//     printf ("Тест нашей функции:\n");
//     printf ("%d\n", ft_isdigit('A'));
    
//     return 0;
// }