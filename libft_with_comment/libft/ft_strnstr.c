#include "libft.h"

// Функция strnstr ищет первое вхождение len символов строки 
// (за исключением признак конца строки), на которую указывает аргумент needle, 
// в строку, на которую указывает аргумент haystack. Если строка needle имеет нулевую длину, 
// то функция вернет указатель на начало строки haystack.

char * ft_strnstr(const char *haystack, const char *needle, size_t len)
{ // должна найтись вся needle в пределах len 

    if (haystack == NULL || needle == NULL)
        return (NULL);

// Если needle - пустая строка, возвращается haystack; +
    if (ft_strlen(needle) == 0 || needle == haystack)
        return (char *)haystack;

    if (len == 0)
        return (NULL);

    size_t i; // счетчик длинной строки
    size_t l; // счетчик длинной строки при нахождения совпадения
    size_t j; // счетчик короткой строки
    size_t k_len; // внешний счетчик len-а
    size_t n_len; // внутренний счетчик len-а
    
    i = 0;
    k_len = 0;

// В противном случае возвращается указатель на первый символ первого вхождения needle.
    // крутим до тех пор пока не кончится длинная строка или len
    while (haystack[i] && len > k_len)
    {
        l = i;
        j = 0;
        n_len = k_len;

        // встречаем первое совпадение
        while (needle[j] && haystack[l] == needle[j] && len > n_len)
        {
            l++;
            j++;
            n_len++;
        }
        if (!needle[j])
                return ((char *)haystack+k_len);

        i++;
        k_len++; // крутим len 
    }

// Если needle нигде не встречается в haystack, возвращается значение NULL; +
    return (NULL);
}

// int main()
// {
//     char a [100] = "456";
//     char b [5] = "";
    
//     printf ("Наша функция: %s\n", ft_strnstr(a, b, 0));
//     printf ("Оригинал: %s\n", strnstr(a, b, 0)); 

//    return 0;    
// }