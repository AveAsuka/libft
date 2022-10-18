#include "libft.h"

int perebor_seta(char s1, char const *set)
{
    size_t i;

    i = 0;
    while (set[i])
    {
        if (set[i] == s1)
            return 1;
          
        i++;
    }   
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    char * mid;
    size_t start;
    size_t end;
    size_t lenght;

    if (s1 == NULL || set == NULL)
        return (NULL);
        
    lenght = ft_strlen(s1);

// останавливаемся, когда крутим в начале и находим хоть один элемент из сета
    start = 0;
    while (s1[start] && perebor_seta(s1[start], set))
        start++;
    
    end = lenght;
    // чтобы не было наслоения && не было заход на ноль
    while (end > start && perebor_seta(s1[end - 1], set))
        end--;

    mid = (char *) malloc( sizeof(*s1) * (end - start +1) );
    if (!mid)
		return (NULL);

    lenght = 0;
    while(start < end)
    {
        mid[lenght] = s1[start];
        lenght++;
        start++; 
    }

    mid[lenght] = 0;
    return mid;
}

// int main()
// {
//     char s1[15] = "123FFF123";
//     char s2[10] = "FFF";

//     printf ("Тест нашей функции:\n");
//     printf ("%s\n", ft_strtrim(s1, s2));

//     return 0;
// }