#include "ft_list.h"
#include <stdlib.h>
void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*current;
	t_list	*next;

	if (begin_list == NULL)
		return ;
	current = begin_list;
	while (current != NULL)
	{
		next = current->next;/* 保存下一个节点 */
		if (free_fct != NULL)
			free_fct(current->data);/* 释放数据内存 */
		free(current);
		current = next;/* 移动到下一个节点 */
	}
	*begin_list = NULL;/* 置空头指针 */
}
