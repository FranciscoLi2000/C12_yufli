#include "ft_list.h"
#include <stdlib.h>
void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *))
{
	t_list	*current;
	t_list	*previous;

	/* 处理链表头部可能匹配的情况 */
	while (*begin_list && cmp((*begin_list)->data, data_ref) == 0)
	{
		current = *begin_list;
		*begin_list = (*begin_list)->next;/* 让头指针跳过当前节点 */
		free_fct(current->data);/* 释放数据 */
		free(current);/* 释放节点 */
	}
	previous = *begin_list;
	if (!previous)
		return ;/* 处理链表为空的情况 */
	current = previous->next;
	while (current)
	{
		if (cmp(current->data, data_ref) == 0)
		{
			previous->next = current->next;/* 让前一个节点跳过当前节点 */
			free_fct(current->data);/* 释放数据 */
			free(current);/* 释放节点 */
			current = previous->next;/* 更新 current */
		}
		else
		{
			previous = current;
			current = current->next;
		}
	}
}
/* 为什么需要 prev（previous）节点？
 * 1. 处理头部连续匹配节点。第一段循环专门用于删除链表开头连续满足条件的节点，因为头节点没有前一个节点，所以可以直接修改 *begin_list 来删除它们。
 * 2. 处理链表中间或尾部的匹配节点
 * 删除头部匹配节点之后，剩下的链表的头部不再满足删除条件，但后面可能有节点需要删除。
 * 在这种情况下，我们需要一个“前一个节点”（prev）来帮助我们更新链表的连接。
 * 当我们遍历链表时，如果当前节点 current 满足删除条件，我们必须让前一个节点 prev 的 next 指针指向 current->next，从而把 current 从链表中“跳过”。*/
