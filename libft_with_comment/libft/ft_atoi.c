#include "libft.h"

 // Функция возвращает число - результат преобразование строки, если в начале строки 
 // содержится число. 
 // Если в начале строки стоит символ не являющейся цифрой, то функция возвращает ноль.

 int ft_atoi(const char *str)
 {
    if (!str)
        return 0;
    
    int i; // у сайз т меньше вроде размер, чем у инта 
    int znak;
    long long int itog;
    i = 0;
    znak = 1;
    
    // сначала крутим, игнорируя все невидимое
    while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' ||
            str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
            i++;
                
    // потом натыкаемся на знак
    if (str[i] == '-')
    {
        znak = -1;
        i++;
    }
    else if (str[i] == '+')
    {
        znak = 1;
        i++;
    }

    // потом накапливаем числа 
    itog = 0;
	while (str[i] >= '0' && str[i] <= '9')
		itog = (itog * 10) + (str[i++] - '0');

    itog = znak * itog;

    if (-2147483648 <= itog && itog <= 2147483647)
        return ((int)itog);
    if (znak == -1)
        return (0);
    
    return (-1);
 }

// int main()
// {
//     char Str[40] = "abc1234"; //Строка для преобразования
//     int Num = 0;              //Переменная для записи результата 
//     Num = ft_atoi(Str); //Преобразование строки в число типа int
//     printf ("%d\n", Num);

//     return 0; 
//  }