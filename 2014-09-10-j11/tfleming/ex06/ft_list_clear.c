// not sure about this one

void			ft_destroy_all(t_list list)
{
	if (list->next != NULL)
		ft_destroy(list->next);
	free(list);
}

void			ft_list_clear(t_list **begin_list)
{
	ft_destroy_all(*begin_list);
	*begin_list = NULL;
}