#include "libft.h"

// тоже самое, что и мемсет, только нули
// куда, сколько
void ft_bzero(void *s, size_t n)
{
    size_t i;

    if(!s)
        return;

    i = 0;
    while (i < n)
    {
        * (char *) (s + i) = 0; // присваиваем ноль каждому значению массива
        i++;
    }
    
}

// int main()
// {
//     // Массив с исходной строкой
//    char str[11] = "0123456789";

//    ft_bzero(str, 1); 
//    printf ("%s\n" , str); 

//    bzero(str, 1); 
//    printf ("%s\n" , str); 

//    return 0;
// }