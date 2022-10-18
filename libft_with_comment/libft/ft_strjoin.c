#include "libft.h"

// НЕ ПРОРАБОТАН МОМЕНТ С ВАРИАНТОМ, КОГДА НАДО ВЫВЕСТИ "NULL"

char *ft_strjoin(char const *s1, char const *s2)
{
    if (s1 == NULL || s2 == NULL)
        return (NULL);

    char *s3;
    size_t i;
    size_t j;

    i = ft_strlen (s1);
    j = ft_strlen (s2);

    s3 = (char *) malloc((i + j + 1) * sizeof(char));
    if (!s3)
        return (NULL);
  //  printf("|first %d|\n", (i + j) );

    i = 0;
    while (s1[i])
    {
        s3[i] = s1[i];
        i++;
    }

    j = 0;
    while (s2[j])
    {
        s3[i] = s2[j];
        i++;
        j++;
    }

    s3[i] = 0;
    //printf("|second %d|\n", (i) );
    return s3;

    return 0;
}

int main()
{
 char *s1 = "abcde";
 char *s2 = "12345";

// char s1[1] = "";
// char s2[1] = "";

// char s1[1000] = "eabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcde";
// char s2[1000] = "4512345123451234512345123451234512345123451234512345123451234512345123451234512345123451234512345123451234512345123451234512345123451234512345123451234512345123451234512345123451234512345123451234512345";

printf ("Тест нашей функции:\n");
printf ("%s\n", ft_strjoin(s1, s2));

return 0;
}