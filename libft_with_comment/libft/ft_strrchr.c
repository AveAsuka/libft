#include "libft.h"

// Функция strrchr ищет последнее вхождения символа, 
// код которого указан в аргументе c, в строке, на которую указывает аргумент s.

char * ft_strrchr(const char *s, int c)
{
    char d;
	d = (char) c;
    // Функция strchr ищет последнее вхождения символа, 
    // код которого указан в аргументе c, в строке, на которую указывает аргумент s.

     if (!s)
        return (NULL);

    int i; // почему то когда сайз т, то все к хуям ебется...

    i = ft_strlen((char*)s) - 1;

    if ( c == '\0' ) // если надо найти 'ноль'
	    return ( (char *)s + i + 1 );

    while (i >= 0)
    {
        if( s[i] == d )
          return ( (char*)s + i );

        i--;
    }
    
    return (NULL);
}

// int main()
// {
//        char s[] = "tripouille";
//	//    char s2[] = "ltripouiel";

//        printf("%s\n",ft_strrchr(s, 't' + 256));
//        printf("%s\n",strrchr(s, 't' + 256));

//        return 0;
// }