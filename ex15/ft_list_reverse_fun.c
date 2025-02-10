#include "ft_list.h"
void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*start;
	t_list	*end;
	t_list	*previous;
	void	*temp;

	if (!begin_list)
		return ;
	start = begin_list;
	end = begin_list;
	/* 找到链表的最后一个节点 */
	while (end->next)
		end = end->next;
	/* 交换 data，直到 start 和 end 交叉 */
	while (start != end && start->next != end)
	{
		temp = start->data;
		start->data = end->data;
		end->data = temp;
		/* 移动 start 向后，end 向前 */
		start = start->next;
		previous = begin_list;
		while (previous->next != end)
			previous = previous->next;
		end = previous;
	}
}
