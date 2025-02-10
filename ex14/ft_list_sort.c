#include "ft_list.h"
void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*current;
	t_list	*next;
	void	*temp;
	int	sorted;

	if (begin_list == NULL || *begin_list == NULL)
		return ;
	sorted = 0;
	while (!sorted)
	{
		sorted = 1;
		current = *begin_list;
		while (current->next)
		{
			next = current->next;
			if ((*cmp)(current->data, next->data) > 0)
			{
				temp = current->data;
				current->data = next->data;
				next->data = temp;
				sorted = 0;
			}
			current = current->next;
		}
	}
}
