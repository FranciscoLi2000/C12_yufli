#include "ft_list.h"
void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*current;

	if (!begin_list1 || !*begin_list1)
	{
		*begin_list1 = begin_list2;/* 如果第一个链表为空，直接赋值 */
		return ;
	}
	current = *begin_list1;
	while (current->next)
		current = current->next;/* 找到第一个链表的最后一个节点 */
	current->next = begin_list2;/* 连接第二个链表 */
}
