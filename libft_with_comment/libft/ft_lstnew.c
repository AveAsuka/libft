#include "libft.h"

// Выделяет (с помощью malloc(3)) и возвращает новый элемент. 
// Переменная ’content’ инициализируется значением параметра ’content’.
// Переменная "next" инициализируется значением NULL.

t_list *ft_lstnew(void *content)
{
    t_list  *d;

    if (!(d = (t_list*)malloc(sizeof(*d))))
		return (NULL);
        
	d->content = content;
    d->next = NULL;

    return (d);
}