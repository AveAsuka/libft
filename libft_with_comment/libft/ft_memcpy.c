#include "libft.h"

// Функция memcpy копирует n байт из массива (области памяти), 
// на который указывает аргумент src, в массив (область памяти), 
// на который указывает аргумент dst. 
// Если массивы перекрываются(???), результат копирования будет не определен.

void * ft_memcpy(void * dst, const void * src, size_t n)
{
    size_t i;

    i = 0;

     if(!dst || !src)
        return (NULL);

    while (i < n)
    {
        *(unsigned char*) (dst + i) =  *(unsigned char*) (src + i);  
        i++;
    }

    return (dst);
}

// Testing ft_memcpy
//  [!] Error for value src:"(null)" and size: 0
//  [!] Expected: - Got: (null)
//  [*] ft_memcpy : [KO]

 int main()
{
    char dst [100] = "";
    
    printf ("dst: %s\n", memcpy(dst, NULL, 0));
    
    printf ("ft_dst: %s\n",ft_memcpy (dst, NULL, 0));

    return 0;
}


//  int main()
//  {
// //     // Массив источник данных
// //    unsigned char src[10]= "123456";
//  char dst [100];
// //    // Массив приемник данных
// //    unsigned char dst[10]= "abcdef";

// //    // Копируем 6 байт из массива src в массив dst
// //    memcpy (dst, src, 8);
//   memcpy(((void *)0), "segfaulter tu dois", 17);

// //    // Вывод массива dst на консоль
//     printf ("dst: %s\n",dst);
//    // ft_memcpy(((void *)0), "segfaulter tu dois", 17);
// //    ft_memcpy (dst, src, 8);
//     printf ("dst: %s\n",dst);

//     return 0;

//  }
