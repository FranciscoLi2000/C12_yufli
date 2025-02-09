#include "ft_list.h"
/*
void	ft_list_push_back(t_list **begin_list, void *data)
{
	// 创建新节点 //
	t_list	*new_node;
	new_node = ft_create_elem(data);
	if (!new_node)
		return ;
	// 处理空链表 //
	if (*begin_list == NULL)
	{
		*begin_list = new_node;
		return ;
	}
	// 定位尾节点 //
	t_list	*last_node;
	last_node = *begin_list;
	while (last_node->next != NULL)
		last_node = last_node->next;
	// 链接新节点到链表末尾 //
	last_node->next = new_node;
}
*/
void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new_node;
	t_list	*last_node;

	new_code = ft_create_elem(data);
	if (!new_node)
		return ;
	if (*begin_list == NULL)
	{
		*begin_list = new_node;
		return ;
	}
	while (last_node->next != NULL)
		last_node = last_node->next;
	last_node->next = new_node;
}
