void		ft_list_foreach_if(t_list *begin_list
	, void (*f)(void *)
	, void *data_ref
	, int (*cmp)())
{
	if (begin+list)
	if (begin_list->next != NULL)
		ft_list_foreach(ft_list->next, f);// I am here
}