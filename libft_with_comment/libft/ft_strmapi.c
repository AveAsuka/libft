#include "libft.h"

// Вроде все верно - проверить вместе с Настей

// // условная манипуляция с каждый элементом, какая угодно
// char f(unsigned int X,char Y)
// {
//     Y = X+48; // даем каждому элементу массива его номер
    
//     return Y;
// }

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    if (s == NULL)
        return (NULL);

    unsigned int i = 0;
    char *s2;

    if ( !(s2 = ft_strdup(s)) )
        return (NULL);

    i = 0;
    while(s2[i])
    { 
        s2[i] = (*f)(i, s2[i]);
        i++;
    }
   
    return s2;
}

// int main()
// {
//     char s1[11] = "AABAABAABA";
    
//     printf ("Тест нашей функции:\n");
//     printf ("%s\n", ft_strmapi(s1, f));
//     // Вывод: 0123456789
//     return 0;
// }