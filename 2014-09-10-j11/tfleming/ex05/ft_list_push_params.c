void		ft_list_push_front(t_list **begin_list, void *data)
{
	t_list new_one;

	new_one = ft_create_elem(data)
	new_one->next = *begin_list;
	*begin_list = new_one;
}

t_list		*ft_list_push_params(int ac, char **av)
{
	int i;
	t_list *first_elem;

	i = 0;
	while (i < ac)
		ft_list_push_front(&first_elem, av[i]);
	return first_elem;
}