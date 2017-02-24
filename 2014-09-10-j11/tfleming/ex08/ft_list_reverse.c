void		ft_list_reverse(t_list **begin_list)
{
	t_list		*this_one;
	t_list		*temp;
	t_list		*last;

	this_one = *begin_list;
	while (this_one != NULL)
	{
		temp = this_one->next;
		this_one->next = last;
		last = this_one;
		this_one = temp;
	}
	*begin_list = this_one;
}