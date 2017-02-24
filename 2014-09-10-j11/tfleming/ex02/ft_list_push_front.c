void		ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *new_one;

	*new_one = ft_create_elem(data)
	new_one->next = *begin_list;
	*begin_list = new_one;
}