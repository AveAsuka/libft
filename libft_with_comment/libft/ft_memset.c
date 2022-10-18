#include "libft.h"

// Функция memset заполняет len байтов блока памяти, через указатель b. 
// Код заполняемого символа передаётся в функцию через параметр c.
// куда, что, сколько
void * ft_memset(void *b, int c, size_t len)
{
    size_t i;

    if (!b || b == 0)
		return (NULL);

    i = 0;
    while (len > i)
    {
        // войд надо привести в ансайд чар, потом разыменовываем 
        // указатель, и даем данному элементу конкретное значение
        // который тоже приводим к ансайду
         *(unsigned char*)(b + i) = (unsigned char)c; 
        
        i++;
    }
    
    return b;
}

int main()
{
    // Массив с исходной строкой
   //char str[11] = "0123456789";

   printf ("%s\n", ft_memset(((void *)0), 'a', 12)); // наверно потому что size_t
   printf ("%s\n", memset(  ((void *)0), 'a', 12  )    ); 

   return 0;
}