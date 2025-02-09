#include "ft_list.h"
/* 在链表头部插入一个新节点 */
void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new_node;
	new_node = ft_create_elem(data);
	if (!new_node)
		return ;
	new_node->next = *begin_list;
	*begin_list = new_node;
}
