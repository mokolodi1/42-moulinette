void		ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	f(begin_list->data);
	if (begin_list->next != NULL)
		ft_list_foreach(ft_list->next, f);
}