#include "libft.h"

// Функция strlcpy копирует из строки src в буфер dst не более чем dstsize - 1 символов 
// и гарантированно устанавливает в конец строки нулевой символ. strlcat делает то же самое, 
// однако копирование ведётся не в начало dst, а таким образом, чтобы продолжить строку, 
// на которую указывает dst. 
// В случае, когда dst указывает на нуль-символ, поведение функций эквивалентно.

size_t ft_strlcpy(char * dst, const char * src, size_t dstsize)
{ // strlcpy возвращает размер строки по адресу src
   // я как понял перестраховку если массив NULL мы не делаем, так как restrict,
   // то есть указывает уже на конкретную область в памяти, то != 0

    size_t i;
    i = 0;

    if (dstsize > 0)
    {
        while (src[i] && (dstsize - 1) > i) // -1 так как надо учесть ноль в конце строки
        {
            dst[i] = src[i];
            i++;
        }

        dst[i] = '\0';
    }

    return ft_strlen(src);
}

// int main()
// {
//     char   str[100] = "образец строки";
//     size_t  sz;
 
//     char  buf[100];  // буфер размером меньше строки
//   //  buf[0] = '\0'; // избыточная инициализация для отладочной печати
    
//     // printf("строка: \"%s\"\n\n", str);
//     // printf("буфер перед копированием: \"%s\"\n", buf);
    
//     sz = strlcpy(buf, str, sizeof(buf));    
//   //  if (sz >= sizeof(buf))  // пример определения усечения строки      
//         printf("%zu\n", sz);
    
//     //printf("буфер после копирования:  \"%s\"\n", buf);
    
//     return 0;
// }