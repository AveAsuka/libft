#include "libft.h"

// Создаем структуру с двумя переменными
// typedef struct	s_split_next - сама структура
// {
// 	size_t start;
// 	size_t length;
// }				t_split_next; - имя для обращения к структурной переменной

// 2.
static char **ft_alloc_split(char const *s, char c)
{ // строка, сепаратор
	size_t	i; 
	char	**split;
	size_t	total;

	i = 0;
	total = 0;

	while (s[i]) // перебираем строку
	{
		if (s[i] == c) //встречаем сепаратор
			total++; // копим кол-во разделителей
		i++;
	}

	// малочим строки под накпленные разделители
	split = (char**)malloc(sizeof(s) * (total + 2));
	if (!split) // если памяти не выделилось, то нуль
		return (NULL);

	return (split);
}

// 3.2.
void *ft_free_all_split_alloc(char **split, size_t elts)
{ // накопленный двойной массив, "длина" второй структуры
	size_t	i;
	i = 0;

	// крутим цикл, пока не дойдем до накопленной "длины" второй структуры
	while (i < elts)
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (NULL);
}

// 3.1. 
static void	*ft_split_range(char **split, char const *s, t_split_next *st, t_split_next *lt)
{ // накопленный двойной массив, строка, используем обе структуры 

 // номер элемента двойного массива это "длина" первой структуры, и ему дают значение
 // "вырезанием": 1)где - строка, 2)откуда - "старт" второй структуры, 3)сколько - "длина" второй структуры 
	split[lt->length] = ft_substr(s, st->start, st->length);

 // если элемент от двойного массива не существует, то 3.2. 
	if (!split[lt->length])
		return (ft_free_all_split_alloc(split, lt->length));

 // увеличиваем "длину" первой структуры и...
	lt->length++;

 // ...возращаем что получилось
	return (split);
}

// 3.
static void *ft_split_by_char(char **split, char const *s, char c)
{	// накапливаемый двойной массив, строка, разделитель
	size_t			i;
	t_split_next	st; // создаем две переменные от структуры, где тоже две переменные:
	t_split_next	lt; // "старт" и "длина" (смотри самый вверх)

	i = 0; // счетчик строки
	lt.length = 0; // нулим полностью первую структуру, вторая "в запасе"
	lt.start = 0;

	while (s[i]) //перебираем до конца строку
	{
		if (s[i] == c) // если встречаем разделитель 
		{
			st.start = lt.start; // копим "старт" второй структуры

	// копим "длину" второй структуры: место в строке минус "старт" первой структуры
			st.length = (i - lt.start); 

	// если место в строке больше "старта" первой структуры И
			if (i > lt.start && !ft_split_range(split, s, &st, &lt))
				return (NULL);

			lt.start = i + 1; // увеличиваем "старт" первой структуры
		}

		i++; // крутим строку
	}

	st.start = lt.start; // снова копим "старт" второй структуры
	st.length = (i - lt.start); // снова копим "длину" второй структуры

	if (i > lt.start && i > 0 && !ft_split_range(split, s, &st, &lt))
		return (NULL);

	// даем ноль последнему элементу
	split[lt.length] = 0;

	return (split);
}

// 1. 
char **ft_split(char const *s, char c)
{ // строка, сепаратор
	char	**split; // создаем массив строк

	// 2. в наш двойной массив передаем накполенные строки 
	if (!(split = ft_alloc_split(s, c)))
		return (NULL);

	// 3.
	if (!ft_split_by_char(split, s, c))
		return (NULL);

	return (split);
}