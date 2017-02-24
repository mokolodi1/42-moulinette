#include	"ft_list.h"

t_list		*find_end(t_list *list)
{
	if (list->next == NULL)
		return list;
	return find_end(list->next);
}

void		ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *new_one;

	new_one = ft_create_elem(data)
	if (*begin_list == NULL)
		*begin_list = new_one;
	else
		find_end(*begin_list)->next = new_one;
}
