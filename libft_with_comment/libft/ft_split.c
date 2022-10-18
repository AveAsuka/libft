#include "libft.h"

// 1. Функция, которая считает количество реальных разделителей и разделителей всего
static int ft_split_num_of_sep(char const *s, char c)
{ // подаем массив и разделитель, возращаем кол-во разделителей
    int num_of_sep;
    int i;

    num_of_sep = 0;
    i = 0;

    while (s[i]) // перебираем до конца передаваемую строку
    {
        if (s[i] == c )
        {   
            num_of_sep++;
            while (s[i] == c)
                i++;
        }   
        else if (s[i] != c)
          i++;
    }

    if (i == num_of_sep || s[0] == '\0')
      return (0); 

    if (s[0] == c)
        num_of_sep--;

    if (s[i-1] == c && i != 0)
        num_of_sep--;
        
    return num_of_sep;
}

 // Функция для очистки памяти
static char **mem_free(char **a, int i)
{
    free(a[i]);
    while (i != 0)
    {
        i--;
        free(a[i]);
    }
    free(a);
    return (0);
}

// 2. Функция, которая "нарезает" нашу строку на отрезки
static char ** ft_split_cut_seg(char const *s, char c, char **a, int num_of_sep)
{ // оригинальная строка, разделитель, двойной массив с замолоченными строками

    int i; // перебор основной строки
    int j; // счетчик подстроки до сепаратора
    int l; // контроллер основной строки для присваивания валидных ее частей подстроке
    int line; // счетчик общего количества подстрок 
    int k; // "помощник" l, чтобы перетягивать ее через сепараторы, возможно можно будет убрать
    int end;

    end = ft_strlen(s);
    i = 0; 
    j = 0; 
    l = 0;
    line = 0; // перевод на место под новый отрезок
    k = 0;

    while (s[i]) // перебираем до конца основную строку
    {
        if (s[i] != c && i+1 != end) // возможно надо поправить момент с сепаратором в конце
        { // если элемент не сепаратор И следующий за ним не равен 0
            i++; // копим основную строку и подстроку
            j++; 
        }

     // на случай если несколько разделителей подряд и отрезок не накопился
        else if ( (s[i] == c || i+1 == end) && j > 0 ) 
        { // (если встречаем сепаратор ИЛИ след элемент равен 0) И подстрока > 0
             if (i+1 == end && s[i] != c)
	                j++;
            a[line] = (char *) malloc((j + 1) * sizeof(char)); // выделяем память под подстроку
            if (a[line] == NULL) // освобождаем накопленную память, если не выделилось
                mem_free (a, line);

            while (s[k] == c) // если элемент сепаратор, то копим l (и k)
            {
                k++;
                l++;
            }

            k = i; // потом k "догоняет" i
            j = 0; // обнуляем счетчик подстроки

            while (i > l) // мы накопили l, которое теперь продолжается точно не с сепаратора,
            {  // мы присваиваем его подстроке, крутим пока не дошли до момента где остановились
                a[line][j] = s[l];
                j++;
                l++;
            }

            // для последнего элемента - в принципе правильно, доработать
            if (i+1 == end && s[i] != c)
            {
                a[line][j] = s[l];
                j++;
            }
            
            a[line][j] = '\0'; // заканчиваем подстроку
            j = 0; // обнуляем счет подстроки 
            line++; // перескакиваем на новую строку
        }
        else if (i+1 == end && j == 0 && (num_of_sep+1) > line)
            j++;
        else
            i++;
    }

    a[line] = NULL;
    return a;
}

// Функция, которая МОЯ
char **ft_split (char const *s, char c)
{
    if (!s)
        return (NULL);
    int num_of_sep;
    char **a; 

    num_of_sep = ft_split_num_of_sep(s, c); // считаем кол-во отрезков

    a = (char **) malloc( (num_of_sep + 2) * sizeof(a) );
    if (!a)
		return (NULL);

    a = ft_split_cut_seg(s, c, a, num_of_sep);
    return a;
}

int main()
{
   // char *s = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse"; 
    char *s = "lorem ipsum dolor sit amet"; 
	char **result = ft_split(s, ' ');
    int i;

    if (result)
    {
    for (i = 0; *(result + i) ; i++)
           printf ("%s\n", *(result + i)); 
    }
  //  printf ("%p\n", *(result + i)); 
    
    return 0;
}
