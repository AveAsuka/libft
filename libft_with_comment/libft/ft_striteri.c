#include "libft.h"

// 2. условная манипуляция с каждый элементом, какая угодно
void f(unsigned int X,char* Y)
{
    *Y = X+48; // даем каждому элементу массива его номер
}

// оригинал прототипа исправить, main, и функция f не нужны, не забудь подредактировать прототип в h!
// void ft_striteri(char *s, void (*f)(unsigned int, char*))

// 1. пробежаться по всей строке и изменить все элементы
void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;

    if (!s)
		return ;

    i = 0;
    while(s[i])
    { // ставим амперсанд, так как обращаемся не к значению элемента массива, а к самому адресу его, 
    // так сказал Иаков, в откровении Авеля, стих 5
        f(i, &s[i]); 
        i++;
    }
   
    return ;
}

// int main()
// {
//     char s1[11] = "AABAABAABA";
    
//     printf ("Тест нашей функции:\n");
//     printf ("%s\n", ft_striteri(s1, f));
//     // Вывод: 0123456789
//     return 0;
// }