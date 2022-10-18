#include "libft.h"

char *ft_strdup(const char *s1)
{
    char *copy;
    size_t i;

    if (!s1)
        return (NULL);

    copy = (char*)malloc( (ft_strlen(s1) + 1) * sizeof(* copy) );
    if (!copy)
        return (NULL);

    i = 0;
    while (s1[i])
    {
        copy[i] = s1[i];
        i++;
    }
    
    copy[i] = 0;
    return copy;
}

// int main()
// {
//     // Массив с исходной строкой
//    char str[11] = "0123456789";

//    //Определение длины строки и вывод результата на консоль
//    printf ("%s\n", ft_strdup(str)); // наверно потому что size_t

//    return 0;
// }